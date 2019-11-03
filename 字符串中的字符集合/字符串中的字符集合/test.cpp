#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while (cin >> str){
		int arr[256] = { 0 };
		for (size_t i = 0; i < str.size(); ++i){
			if (arr[str[i]] == 0){
				cout << str[i];
				arr[str[i]] = 1;
			}
		}
		cout << endl;
	}
	return 0;
}