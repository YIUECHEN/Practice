#include"util.h"
#include"httplib.h"
void helloworld(const httplib::Request &req,httplib::Response &rsp){
	printf("httplib server recv a req:%s\n",req.path.c_str());
	rsp.set_content("<html><hl>HelloWorld</hl></html>", "texl/html");
	rsp.status = 200;
}

int main(int argc,char *argv[]){
	/*std::vector<Adapter> list;
	AdapterUtil::GetAllAdapter(&list);
	Sleep(1000000);*/

	httplib::Server srv;
	srv.Get("/", helloworld);
	srv.listen("0.0.0.0", 9000);
	return 0;
} 