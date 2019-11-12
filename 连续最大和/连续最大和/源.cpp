#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int sum = a[0];
	int max = a[0];
	for (int i = 1; i < n; i++){
		if (sum >= 0){
		
			sum += a[i];
		}
		else{
			sum = a[i];
		}
		if (max < sum){
			max = sum;
		}
	}
	cout << max << endl;
	return 0;
}
