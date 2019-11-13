#include<iostream>
#define MAX 1024
using namespace std;
int main(){

	int n = 0;
	cin >> n;

	int fib[MAX] = { 0 };
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i < MAX; i++){
		fib[i] = fib[i - 1] + fib[i - 2];
		if ((fib[i - 1] <= n) && (fib[i] >= n)){
			int left = n - fib[i - 1];
			int right = fib[i] - n;
			cout << ((left < right) ? left : right) << endl;
			break;
		}
	}
	return 0;
}