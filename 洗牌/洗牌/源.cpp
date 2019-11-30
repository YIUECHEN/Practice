#include<iostream>
#include<vector>
using namespace std;

int main(){
	int T;
	cin >> T;
	while (T--){
		int n, k;
		cin >> n >> k;
		int num = 2 * n;
		vector<int> v(num);
		for (int i = 0; i<num; i++){
			cin >> v[i];
		}
		while (k--){
			vector<int> temp(v);
			for (int i = 0; i<n; i++){
				v[2 * i] = temp[i];
				v[2 * i + 1] = temp[i + n];
			}
		}
		for (int i = 0; i<num - 1; i++){
			cout << v[i] << " ";
		}
		cout << v[num-1] << endl;
	}
	return 0;
}
