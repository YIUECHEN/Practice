#include<iostream>
#include<string>

using namespace std;

int main(){
	string a, b;

	while (cin >> a >> b){
		if (a.size() > b.size()){
			swap(a, b);
		}
		string str_m;//存储最长公共子串
		for (int i = 0; i < a.size(); i++){
			for (int j = i; j < a.size(); j++){
				string temp = a.substr(i, j - i + 1);
				int ret = b.find(temp);
				if (ret < 0)
					break;
				else if (str_m.size() < temp.size()){
					str_m = temp;
				}
			}
		}
		
		cout << str_m << endl;
	}
	return 0;
}
	