#include<iostream>
using namespace std;
//

int getSum(int n, int m){
	//��λ��&�ǲ鿴��������Щ������λ����1����Щ���ǽ�λλ�������Ҫ����һλ����ʾ��λ��Ľ��
	//���^�ǲ鿴��������Щ������λֻ��һ��1����Щ���Ƿǽ�λλ�������ʾ�ǽ�λλ���мӲ�����Ĳ���
	int x, y;
	x = (n&m) << 1;
	y = n^m;
	while (x&y){
		n = x;
		m = y;
		x = (n&m) << 1;
		y = n^m;
	}
	return x|y;
}
int main(){
	int n, m;
	while (cin >> n >> m){
		cout << getSum(n, m) << endl;
	}
	return 0;
}