#include<iostream>
#include<string>

using namespace std;
string ReverseSentence(string str) {
	string temp = "";
	string res = "";
	for (unsigned i = 0; i<str.size(); i++){
		if (str[i] != ' '){
			temp += str[i];
		}
		else{
			res = " " + temp + res;;
			temp = "";
		}
	}
	if (temp.size()){
		res = temp + res;
	}
	return res;
}

int main(){
	string str = "I am a student";
	string res=ReverseSentence(str);
	cout << res << endl;
	return 0;
}