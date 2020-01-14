#include<iostream>
#include<string>

using namespace std;
string ToLowerCase(string str){
	for (int i = 0; i < str.size(); i++){
		if (str[i]<='Z'&&str[i]>='A')
		str[i] += 32;
	}
	return str;
}
int main(){
	string s;
	while (cin >> s){

		string str = ToLowerCase(s);
		cout << str <<endl; 
	}
	system("pause");
	return 0;
}