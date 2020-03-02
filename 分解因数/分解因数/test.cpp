#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){
	int num;
	while (cin >> num&&num >= 2){
		printf("%d=", num);
		for (int i = 2; i < sqrt(num); i++){
			while (num%i == 0 && i <= num / i){
				printf("%d *", i);
				num = num / i;
			}
		}
		printf("%d\n", n);
	}
	return 0;
}