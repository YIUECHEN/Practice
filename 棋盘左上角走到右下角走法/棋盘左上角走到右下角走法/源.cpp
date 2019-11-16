#include<iostream>
#include<vector>

using namespace std;

int fun(int n,int m){
	vector<vector<int>> v;
	v.resize(n + 1, vector<int>(m + 1));
	for (int i = 1; i < m + 1; i++){
		v[0][i] = 1;
	}

	for (int i = 1; i < n + 1; i++){
		v[i][0] = 1;
	}

	for (int i = 1; i < n + 1; i++){
		for (int j = 1; j < m + 1; j++){
			v[i][j] = v[i - 1][j] + v[i][j - 1];
		}
	}
	return v[n][m];

}
int main(){

	int n, m;
	while (cin >> n >> m){
		cout << fun(n, m) << endl;
	}
	system("pause");
	return 0;
}