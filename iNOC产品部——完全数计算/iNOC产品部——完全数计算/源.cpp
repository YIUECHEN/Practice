#include<iostream>
using namespace std;
bool is_Pernum(int n){
	int sum = 0;
	for (int i = 1; i < n; i++){
		if (n%i == 0){
			sum += i;
		}
	}
	if(sum==n)
		return true;
	return false;
}
int main(){
	int n;
	while (cin >> n){
		int count = 0;
		for (int i = 1; i <= n; i++){
			if (is_Pernum(i)){
				count++;
			}
		}
		cout << count << endl;		
	}
	return 0;
}