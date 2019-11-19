#include<iostream>
using namespace std;

int main(){

	int i;
	while (cin >> i){
		int sum = 0;
		int count = 0;
		for (int n = i;n; n/= 2){
			if (i % 2 == 1){
				sum++;
			}
			if (count < sum){
				count = sum;
			}
			else { 
				sum = 0;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}