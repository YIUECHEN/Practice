#include<iostream>
#include<vector>
#include<string>
using namespace std;
//bool isPalindrome(string s) {
//	vector<char> svec;
//	for (int i = 0; i < s.length(); i++){
//		if (isalpha(s[i]) || isdigit(s[i]))
//			svec.push_back(tolower(s[i]));
//	}
//	int left = 0, right = svec.size() - 1;
//	while (left < right){
//		if (svec[left++] != svec[right--]){
//			return false;
//		}
//	}
//	return true;
//}
bool isPalindrome(string s) {
	string str = "";
	for (int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
		if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= '0'&&s[i] <= '9')){
			str += s[i];
		}
	}
	for (int i = 0, j = str.size() - 1; i < str.size(), j >= 0; i++, j--){
		if (str[i] != str[j]){
			return false;
		}
	}
	return true;

}
int main(){
	string a = "race a car";
	if (isPalindrome(a)){
		cout << true << endl;
	}
	else{
		cout << false << endl;

	}
	system("pause");
	return 0;

}