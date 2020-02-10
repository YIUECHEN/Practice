#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int evalRPN(vector<string>& tokens) {
	stack<int> s;
	int a, b;
	for (auto & num : tokens){
		if (isdigit(num[0]) || num.size() > 1){
			s.push(atoi(num.c_str()));
		}
		else{
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			switch (num[0]){
			case '+':
				s.push(b + a);
				break;
			case '-':
				s.push(b - a);
				break;
			case '*':
				s.push(b*a);
				break;
			case '/':
				s.push(b / a);
				break;
			}
		}
	}
	return s.top();
}

int main(){
	vector<string> s={ "2", "1", "+", "3", "*" };
	cout<<evalRPN(s);
	system("pause");
	return 0;
}
