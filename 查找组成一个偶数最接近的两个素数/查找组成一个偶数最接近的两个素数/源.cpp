#include<iostream>
using namespace std;
bool isPrime(int num){
	for (int i = 2; i < num; i++){
		if (num%i == 0){

			return false;
		}
	}
	return true;
}

int main(){

	int num;
	int i,min,max;
	while (cin >> num){
		for (i = 1; i <= num/2; i++){
			if (isPrime(i) && isPrime(num - i)){

				min = i;
				max = num - i;

			}
		}
		cout << min << endl;
		cout << max << endl;
	}
	system("pause");
	return 0;
}