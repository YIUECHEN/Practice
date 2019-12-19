#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s) {
	if (s.size() % 2 == 1){
		return false;
	}
	stack<char> st;
	for (auto e : s){
		char popst = ' ';
		switch(e){
		case'(':
		case'[':
		case'{':
			st.push(e);
			break;
		case')':
			if (st.empty())
				return false;
			popst = st.top();
			st.pop();
			if (popst != '(')
			{
				return false;
			}
			break;
		case']':
			if (st.empty())
				return false;
			popst = st.top();
			st.pop();
			if (popst != '[')
			{
				return false;
			}
			break;
		case'}':
			if (st.empty())
				return false;
			popst = st.top();
			st.pop();
			if (popst != '{')
			{
				return false;
			}
			break;
		default:
			return false;
			break;
		}
	}
	if (st.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(){
	string s = { '(', '[', ']', ')' };
	if (!isValid(s)){
		cout << "false" << endl;
	}
	if (isValid(s)){
		cout << "true" << endl;
	}
	system("pause");
	return 0;
}

