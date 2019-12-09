#include<iostream>
using namespace std;

int main(){
	int n;
	while ((cin >> n)&&n){
		if (n == 0){
			return 0;
		}
		else	if (n == 2 || n == 3){
			cout << "1" << endl;
		}
		else{
			int j = 1;
			while(n>3){
				if (n % 3 == 0){
					n /= 3;
				}
				else{
					n = n / 3 + 1;
				}
				j++;
			}
			cout << j << endl;
		}
	
	}
	return 0;
}