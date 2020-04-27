#include<iostream>
#include<string>
#include<map>

using namespace std;

//int FirstNotRepeatingChar(string str) {
//	if (str.size() == 0){
//		return -1;
//	}
//	char ch[256] = { 0 };
//	for (int i = 0; i<str.size(); i++){
//		ch[str[i]]++;
//	}
//	for (int i = 0; i<str.size(); i++){
//		if (ch[str[i]] == 1){
//			return i;
//		}
//	}
//	return -1;
//}

int FirstNotRepeatingChar(string str) {
	if (str.size() == 0) return -1;
	map<char, int> m;
	for (int i = 0; i < str.size(); i++){
		m[str[i]]++;
	}
	for (int i = 0; i < str.size(); i++){
		if (m[str[i]] == 1){
			return i;
		}
	}
	return -1;
}

int main(){
	string str = "nbsfdgssdsnbserty";
	int k=FirstNotRepeatingChar(str);
	cout << k << endl;
	return 0;
}