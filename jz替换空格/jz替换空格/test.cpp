#include<iostream>
#include<string>
using namespace std;

#if 0
void replaceSpace(char *str, int length) {
	if (str == NULL || length <= 0){
		return;
	}
	int count = 0;
	for (int i = 0; i < length; i++){
		if (str[i] == ' '){
			count++;
		}
	}
	for (int i = length - 1; i >= 0; i--){
		if (str[i] != ' '){
			str[i + count * 2] = str[i];
		}
		else{
			count--;
			str[i + count * 2] = '%';
			str[i + count * 2+1] = '2';
			str[i + count * 2+2] = '0';
		}
	}
}
#endif
void replaceSpace(char *str, int length) {
	string s(str);
	while (int i = s.find(' ') > -1){
		s.erase(i, 1);
		s.insert(i, "%20");
	}
	auto res = s.c_str();
	strcpy(str, res);
}

int main(){
	char *s = "we are world";
	int len = sizeof(s);
	replaceSpace(s, len);
	
	cout <<s<< endl;
	system("pause");
	return 0;

}
