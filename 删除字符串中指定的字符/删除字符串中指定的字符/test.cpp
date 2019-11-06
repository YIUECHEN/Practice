#include<iostream>
#include<string>

using namespace std;

int main(){
	string s1, s2;

	getline(cin,s1);
	getline(cin,s2);

	for (int i = 0; i < s2.size(); i++){
		int index;
		while ((index =s1.find(s2[i]))!= -1){
	
				s1.erase(index,1);
			}
		}
		cout<<s1<<endl;
	/*int arr[256] = { 0 };
	for (size_t i = 0; i < s2.size(); i++){
		arr[s2[i]]++;
	}
	string ret;
	for (size_t i = 0; i < s1.size(); i++){
		if (arr[s1[i]] == 0){
			ret += s1[i];
		}
	}
	
	cout <<ret<< endl;*/
	system("pause");
	return 0;
}