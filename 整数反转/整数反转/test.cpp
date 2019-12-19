#include<iostream>

using namespace std;

int reverse(int x) {
	if (x / 10 == 0){
		return x;
	}
	long a=0;
	while (x){
		a = a * 10;
		if (a > INT_MAX || a < INT_MIN)
			return 0;
		a += x % 10;

		x /= 10;
	}
	return a;
}

int main(){
	int x = 1534236363;
	cout << reverse(x) << endl;
	system("pause");
	return 0;
}