#include<iostream>
#include<string>
#include<vector>
#include<string.h>

using namespace std;
int gcd(int a,int b){
	while (a%b){
		int tmp = a;
		a = b;
		b = tmp%b;
	}
	return b;
}

int main(){
	int a, b;
	while (cin>>a>>b){
		int ret = a*b / gcd(a, b);
		cout << ret<< endl;
	}

	system("pause");
	return 0;
}