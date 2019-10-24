#include<string>
#include<iostream>

using namespace std;

int firstUniqChar(string s) {
		int count[256];
		int sz = s.size();

		for (int i = 0; i<sz; ++i){

			count[s[i]] += 1;
		}
		for (int i = 0; i<sz; i++){

			if (1 == count[s[i]]){

				return i;
			}
		}
		return -1;
	}

int main(){
	string s{"hehjilkfid"};
		
	
	char ret=s[firstUniqChar(s)];

	cout << ret << endl;

		system("pause");
		return 0;
	}