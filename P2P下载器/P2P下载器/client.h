#pragma once
#include"util.h"
#include<thread>
#include"httplib.h"

#define P2P_PORT 9000
#define MAX_IPBUFFER 16
class Host{
public:
	uint32_t _ip_addr;//Ҫ��Ե�������ַ
	bool _pair_ret;//���ڴ����Խ������Գɹ���true�����ʧ�ܡ�false
};

class Client{
public:
	//��������߳���ں���
	void HostPair(Host *host){
		//1.��֯httpЭ���ʽ����������
		//2.��֯�һ��TCP�Ŀͻ��ˣ������ݷ���
		//3.�ȴ��������Ļظ��������н���
		//����������ֻ�õ�������httplibʵ��
		char buf[MAX_IPBUFFER] = { 0 };
		inet_ntop(AF_INET, &host->_ip_addr, buf, MAX_IPBUFFER);
	    httplib::Client cli(buf, P2P_PORT);
		auto rsp = cli.Get("/hostpair");
		if (rsp&&rsp->status == 200){
			host->_pair_ret = true;
		}
		return;
	} 

	//��ȡ��������
	bool GetOnlineHost(){
		//1.��ȡ������Ϣ�������õ���������������IP��ַ�б�
		std::vector<Adapter> list;
		AdapterUtil::GetAllAdapter(&list);
		std::vector<Host> host_list;//�����������IP��ַ

		for (int i = 0; i < list.size(); i++){//�õ����е�����IP��ַ�б�
			uint32_t ip = list[i]._ip_addr;
			uint32_t mask = list[i]._mask_addr;
			uint32_t net = (ntohl(ip&mask));//���������
			uint32_t max_host = (~ntohl(mask));//�������������
			for (int j = 1; j < max_host; j++){
				uint32_t host_ip = net + j;//�������IP�ļ���Ӧ��ʹ�������ֽ��������ź�������
				Host host;
				host._ip_addr = htonl(host_ip);//ת��Ϊ�����ֽ���
				host._pair_ret = false;
				host_list.push_back(host);
			}
		}
			//��host_list�е����������߳̽������
		std::vector<std::thread*> thr_list(host_list.size());
		for (int i = 0; i < host_list.size(); i++){
			//2.�����IP��ַ�б��е����������������
			thr_list[i] = new std::thread(&Client::HostPair, this, &host_list[i]);
		}

			//3.���������õ���Ӧ�����ڶ�Ӧ����λ������������IP��ӵ�����online_host�б���
		for (int i = 0; i < host_list.size(); i++){
			thr_list[i]->join();
			if (host_list[i]._pair_ret == true){
				_online_host.push_back(host_list[i]);
			}
			delete thr_list[i];
		}

			//4.��ӡ���������б�ʹ�û�ѡ��
		for (int i = 0; i < _online_host.size(); i++){
			char buf[MAX_IPBUFFER] = { 0 };
			inet_ntop(AF_INET, &_online_host[i]._ip_addr; buf, MAX_IPBUFFER);
			std::cout <<"\t"<< buf << std::endl;
		}
			std::cout << "��ѡ�������������ȡ�����ļ��б�";
			std::string select_ip;
			std::cin >> select_ip;
			GetShareList(select_ip);//�û�ѡ���������󣬵��û�ȡ�ļ��б�ӿ�
			fflush(stdout);
		
	}
	//��ȡ�ļ��б�
	bool GetShareList(const std::string &host_ip){
		//�����˷���һ���ļ��б��ȡ������
		//1.�ȷ�������2.�õ���Ӧ��������ģ��ļ����ƣ�
		httplib::Client cli(host_ip,P2P_PORT);
		auto rsp = cli.Get("/list");
		if (rsp == NULL || rsp->status != 200){
			std::cerr << "��ȡ�ļ��б���Ӧ����\n";
			return false;
		}
		//��ӡ���ġ���ӡ�������Ӧ���ļ������б��û�ѡ��
		std::cout << rsp->body << std::endl;
		std::cout << "\n��ѡ��Ҫ���ص��ļ���";
		fflush(stdout);
		std::string filename;
		std::cin >> filename;
		DownloadFile(host_ip, filename);
		return true;
	}
	//�����ļ�
	bool DownloadFile(const std::string &host_ip,const std::string filename){
		//1.�����˵ķ����ļ���������
		//2.�õ���Ӧ�������Ӧ����е�body���ľ����ļ�����
		//3.�����ļ������ļ�д�뵽�ļ��У��ر��ļ�
		std::string req_path = "/download" + filename;
		httplib::Client cli(host_ip, P2P_PORT);
		auto rsp = cli.Get(req_path);
		if (rsp == NULL || rsp.status != 200){
			std::cerr << "�����ļ�����ȡ��Ӧ��Ϣʧ��\n";
			return false;
		}
		if (FileUtil::Write(filename, rsp->body) == false){
			std::cerr << "����ʧ��" << std::endl;
			return false;
		}
		return true;
	}
private:
	std::vector<Host> _online_host;

};
 
class Server{
public:
	bool start(){
		_srv.Get("/hostpair",HostPair);
		_srv.Get("/list", ShareList);
		_srv.Get("/download.*", DownLoad);
		_srv.listen("0.0.0.0", P2P_PORT);
	}
private:
	static void HostPair(const httplib::Request req, const httplib::Response &rsp){
		return;
	}
	static void ShareList(const httplib::Request req, const httplib::Response &rsp){
		return; 
	}
	static void DownLoad(const httplib::Request req, const httplib::Response &rsp){
		return;
	}

private:
	httplib::Server _srv;
};