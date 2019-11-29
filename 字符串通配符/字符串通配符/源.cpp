//#include<iostream>
//#include<string>
//using namespace std;
//int wildcardStr(string s1, string s2){
//	int i = 0, j = 0;
//
//
//}
//int main(){
//	string s1, s2;
//	while (cin>>s1>>s2)
//	{
//		wildcardStr(s1, s2);
//	}
//	return 0;
//}

#include<iostream>
#include<vector>
using namespace std;
void playYH(int n){
	vector<vector<int>> a(n, vector<int>(2 * n - 1, 0));
	a[0][n-1] = a[n - 1][0] = a[n - 1][2 * n - 2] = 1;
	if (n<2){
		cout << -1 << endl;
		return;
	}

	for (int i = 1; i < n; i++){
			for (int j = 1; j < 2 * n - 2; j++){
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1] + a[i - 1][j + 1];
			}
		}
	for (int i = 1; i<2 * n - 1; i++){
		if (a[n - 1][i]!=0&&a[n - 1][i] % 2 == 0){
			cout << i + 1 << endl;
			return;
		}
	}
}
int main(){
	int n;
	while (cin >> n){
		playYH(n);
	}
	return 0;
}