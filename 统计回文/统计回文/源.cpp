#include<iostream>
#include<string>
using namespace std;

bool check(string s){
	int len = s.length();
	int count = 0;
	for (int i = 0; i < len; i++){
		if (s[i] != s[len - 1])
			return false;
		len = len - 1;
	}
	return true;
}

int main(){
	string s1, s2, s;
	int count,len;
	while (cin >> s1 >> s2){
		count = 0;
		s = s1;
		len = s1.length() + 1;
		for (int i = 0; i < len;i++){
			s1 = s;
			s1.insert(i, s2);
			if (check(s1)){
				count++;
			}
			
		}
		cout << count << endl;
	}
	return 0;
}