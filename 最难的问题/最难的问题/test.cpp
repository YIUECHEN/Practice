#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	while (getline(cin, s)){
		for (int i = 0; i < s.size(); i++){
			if ((s[i] >= 'A') && (s[i] <= 'E')){
				s[i] = 21 + s[i];
			}
			else if ((s[i] >= 'F') && (s[i] <= 'Z')){
				s[i] = s[i] - 5;
			}
			else{
				continue;
			}
		}
		
		cout <<s<< endl;
		
	}
	return 0;
} 