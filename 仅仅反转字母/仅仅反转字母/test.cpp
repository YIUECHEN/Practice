#include<iostream>
#include<string>
using namespace std;

string reverseOnlyLetters(string S) {
	string s1;
	for (int i = S.size() - 1; i >= 0; i--){
		if (S[i] >= 'A'&&S[i] <= 'Z' || S[i] >= 'a'&&S[i] <= 'z'){
			s1.push_back(S[i]);
		}
	}
	for (int i =0,k=0; i < S.size(); i++){
		if (S[i] >= 'A'&&S[i] <= 'Z' || S[i] >= 'a'&&S[i] <= 'z'){
	        S[i]=s1[k++];
		}
	}
	return S;
}

int main(){
	string s = "ab-cd";
	string s1=reverseOnlyLetters(s);
	cout << s1 << endl;
	system("pause");
	return 0;
}