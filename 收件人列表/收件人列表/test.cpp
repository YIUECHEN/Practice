#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		getchar();
		while (n--){
			string name;
			getline(cin , name);
			if (name.find(',') != -1 || name.find(' ') != -1){
				name.insert(name.begin(), '"');
				name.insert(name.end(), '"');
			}
			if (n == 0){
				cout << name << endl;
			}
			else{
				cout << name << ",";
			}
		}
	}
	return 0;
}