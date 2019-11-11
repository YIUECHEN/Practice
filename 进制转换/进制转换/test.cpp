#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s;
	string table = "0123456789ABCDEF";
	int m, n;
	cin >> m >> n;
	//bool flag = false;
	while (m){
		if (m < 0){
			m = -m;
			cout << "-";
		}
		s = table[m%n] + s;
		m /= n;
	}
	cout << s << endl;
	system("pause");
	return 0;
}