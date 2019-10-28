#include<iostream>
#include<string>
#include<vector>

using namespace std;

	int lengthOfLongestSubstring(string s) {
		int n = s.length();
		vector<char> str;
		int mlen = 0;
		//±éÀústring
		for (int i = 0; i<s.size(); ++i){
			int c = s[i];
			//¼ì²évector
			for (int m = str.size() - 1; m >= 0; --m)
			if (c == str[m]){
				if (mlen<str.size()){

					mlen = str.size();
					//str.erase(str.begin(), str.begin() + m + 1);
					break;
				}

			}
			str.push_back(c);
		}
		if (mlen<str.size()){
			mlen = str.size();
			return mlen;
		}
	}
	int main(){
		string s = "abcfeasji";
		int ret = lengthOfLongestSubstring(s);
		cout << ret << endl;
		system("pause");
		return 0;
}