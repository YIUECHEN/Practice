#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1, s2;
	while (cin >> s1 >> s2){
		if (s1.size() < s2.size()){
			s1 = string(s2.size()-s1.size(), '0') + s1;
		}
		else{
			s2 = string(s1.size() - s2.size(), '0') + s2;
		}
		string res = "";
		int carry=0;
		for (int i = s1.size() - 1; i >= 0; i--){
			int temp = s1[i] - '0'+s2[i]-'0'+carry;
			char c = temp % 10 + '0';
			res = c + res;
			carry = temp / 10;
		}
		if (carry){
			res = '1' + res;
		}
		cout << res << endl;
	}

}	