#include<iostream>
#include<vector>

using namespace std;
int getFirstUnFormedNum(vector<int> arr, int len) {
	int min = arr[0];
	int max = 0;
	for (int i = 0; i < len; i++){
		max += arr[i];
		if (arr[i]<min){
			min = arr[i];
		}
	}
		vector<int> v(max + 1, 0);
		for (int i = 0; i < len; i++){
			for (int j = max; j >= arr[i]; j--){
				if (v[j - arr[i]] + arr[i]>v[j]){
					v[j] = v[j - arr[i]] + arr[i];
				}
			}
		}
		for (int i = min; i <= max; i++){
			if (i != v[i])
				return i;
		}
		return max + 1;
}

int main(){
	
	int n;
	while (cin >> n){
		vector<int> v(n);

		for (int i = 0; i < v.size(); i++){
			cin >> v[i];
		}
		cout << getFirstUnFormedNum(v, v.size()) << endl;

	}
	system("pause");
	return 0;
}