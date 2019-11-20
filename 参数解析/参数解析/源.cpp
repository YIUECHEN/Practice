#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

	string str;
	
	while (getline(cin, str)){
		vector<string> ret;
		string s;
		for (int i = 0; i < str.size(); i++){
			if (str[i] != ' '){
				if (str[i] != '\''){
					s += str[i];
				}
				else{
					auto pos = str.find('\'', i + 1);
					if (pos != string::npos){
						string s2 = str.substr(i + 1, pos - i - 1);
						ret.push_back(s2);
						i = pos;
					}
				}
			}
			else{
				if (!s.empty()){
					ret.push_back(s);
				}
				s.clear();
			}
		}
		if (!s.empty()){
			ret.push_back(s);

		}

		cout << ret.size() << endl;
		for (int i = 0; i < ret.size(); i++){
			cout << ret[i] << endl;
		}
	}
		system("pause");
		return 0;
}