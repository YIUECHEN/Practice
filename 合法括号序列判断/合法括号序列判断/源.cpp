#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		vector<char> v;
		int i = 0;
		int j = 0;
		while (i<n)
		{
			if (A[i] == '(' || A[i] == ')' || A[i] == '[' || A[i] == ']' || A[i] == '{' || A[i] == '}')
			{
				if ((A[i] == '(' || A[i] == '[' || A[i] == '{'))
				{
					v.push_back(A[i]);//Î²²å
					++j;
				}
				else
				{
					if (j == 0)
						return false;
					if ((v[j - 1] == '('&&A[i] == ')') || (v[j - 1] == '['&&A[i] == ']') || (v[j - 1] == '{'&&A[i] == '}'))
					{
						v.pop_back();//Î²É¾
						--j;
					}
					else
						return false;
				}
			}
			else
				return false;
			++i;
		}
		return true;
	}
};
int main(){
	return 0;
}