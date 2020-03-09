#include<iostream>
#include<string>
#include<vector>

using namespace std;
string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0) return "";//空字符串
	string res = "";
	for (int i = 0; i<strs[0].size(); i++)
	{
		for (int j = 1; j<strs.size(); j++)
		{
			if (strs[0][i] != strs[j][i])
			{
				return res;//当前的result即为最长公共前缀
			}
		}
		res += strs[0][i];
	}
	return res;
}
int main(){
	vector<string> str= { "abcdfg", "abcde", "abc" };
	cout << longestCommonPrefix(str) << endl;
	system("pause");
	return 0;
}