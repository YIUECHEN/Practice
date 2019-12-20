#include<iostream>
#include<string>

using namespace std;
string countAndSay(int n) {
	string s="1";
	if (n == 1){
		return "1";
	}
	for (int i = 1; i < n; i++){
		string tmp;
		for (int j = 0; j < s.size();j++){
			int count = 1;
			while (j + 1 < s.size() && s[j] == s[j + 1]){
				count++;
				j++;
			}
			tmp += to_string(count) + s[j];
		}
		s = tmp;
	}
	return s;
}

int main(){
	int n;
	string s;
	while (cin >> n){
		 s=countAndSay(n);
		 for (auto e : s){
			 cout << e;
		 }
		 cout << endl;
	}
	return 0;
}