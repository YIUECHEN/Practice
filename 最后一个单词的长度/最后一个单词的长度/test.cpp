#include<iostream>
#include<string>
using namespace std;



int lengthOfLastWord(string s) {
	int res = 0;

	if (s.length() == 0)
		return 0;

	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] != ' ')
			res++;
		else
		{
			if (res)
				break;
		}
	}
	return res;
}


int main(){
	string s = "a ";
	int p = lengthOfLastWord(s);
	cout << p << endl;
	system("pause");
	return 0;
}