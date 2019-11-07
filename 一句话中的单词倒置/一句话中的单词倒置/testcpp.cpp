#include<iostream>
#include<string>
#include<stack>
#include<sstream>
using namespace std;

int main()
{
	stack<string> s;
	string s1,s2;
	getline(cin, s1);
	istringstream stream(s1);
	while (stream >> s2){
		s.push(s2);
	}
	while (!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
   system("pause");
   return 0;
}