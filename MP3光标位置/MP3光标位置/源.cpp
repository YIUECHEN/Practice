#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int n;
	string s;
	while (cin >> n>> s){
		vector<int> v;
		for (int i = 1; i <= n; i++){//初始化播放列表
			v.push_back(i);
		}
		int p = 0;//光标位置
		int x = 0;//当前页显示的第一首歌编号
		int ws = 4;//每页显示的歌曲数
		if (n <= 4){
			ws = n;
			for (int i = 0; i<s.size(); i++){
				if (s[i] == 'U'){
					/*if (p>0){
						p--;
					}
					else if (p = 0){
						p = n - 1;
					}*/
					p == 0 ? p = n - 1 : p--;
				}

				else if (s[i] == 'D'){
					/*if (p < n - 1){
						p++;
					}
					else if (p = n - 1){
						p = 0;
					}*/
					p == n - 1 ? p = 0 : p++;
				}
			}
		}
		else{
			for (int i = 0; i < s.size(); i++){
				if (s[i] == 'U'){
					if (p == 0){
						p = n - 1;
						x = n - 4;
					}
					else{
						if (p == x){
							p--;
							x--;
						}
						else{
							p--;
						}
					}
				}
				else if (s[i] == 'D'){
					if (p == n - 1){
						p = 0;
						x = 0;
					}
					else{
						if (p == x + 3){
							p++;
							x++;
						}
						else{
							p++;
						}
					}
				}
			}
		}
			//输出
		for (int i = x; i < x + ws; i++){
			
				cout << v[i] << " ";
			}
			cout << endl;
			cout << v[p] << endl;
	}
	return 0;
}