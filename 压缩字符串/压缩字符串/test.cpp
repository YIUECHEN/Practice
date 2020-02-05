#include<iostream>
#include<vector>
#include<string>
using namespace std;
int compress(vector<char>& chars) {
	int n = chars.size();
	int cur = 0;
	for (int i = 0, j = 0; i < n; j = i){
		while (i < n&&chars[i] == chars[j]){
			i++;
		}
		chars[cur++] = chars[j];
		if (i-j == 1)continue;
		string s = to_string(i - j);
		for (int t = 0; t < s.size(); t++){
			chars[cur++] = s[t];
		}
	}
	return cur;
}
int main(){
	vector<char> a = { 'a', 'a', 'b', 'b', 'b', 'c' };
	cout << compress(a) << endl;
	system("pause");
	return 0;
}