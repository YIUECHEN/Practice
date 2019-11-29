/*#include<iostream>
#include<string>
using namespace std;
int getCommonStrLength(string s1, string s2){
	if (s1.size() > s2.size()){
		swap(s1, s2);
	}
	int length = 0;
	for (int i = 0; i<s1.size(); i++){
		for (int j = i; j<s1.size(); j++){
			string temp = s1.substr(i, j - i + 1);
			int a=s2.find(temp);
			if (a>0 && length<temp.size())
				length = temp.size();
		}

	}
	return length;
}

int main(){
	string s1, s2;
	while (cin>>s1>>s2){
		int ret = getCommonStrLength(s1, s2);
		cout << ret << endl;
	}
	return 0;
}*/	
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2;
	int dis = 0, t = 0;
	string tmp;
	while (cin >> str1 >> str2)
	{
		int len = str1.length();
		for (int i = len; i>1; i--)
		{
			for (int j = 0; j<len; j++)
			{
				if (i + j <= len)
				{
					tmp = str1.substr(j, i);
					t = str2.find(tmp);
					if (t != -1 && tmp.length()>dis)
						dis = tmp.length();

				}
			}
		}
		cout << dis << endl;
	}

	return 0;
}