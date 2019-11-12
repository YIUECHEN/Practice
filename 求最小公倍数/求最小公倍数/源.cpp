#include<iostream>
using namespace std;
int gcd(int a, int b){
	while (b){
		int t = a%b;
		a = b;
		b = t;
	}
	return a;
}

int main(){

	int a, b,ret;
	while (cin >> a >> b){
		ret = a*b / gcd(a, b);
		cout << ret << endl;
	}
	system("pause");
	return 0;

}