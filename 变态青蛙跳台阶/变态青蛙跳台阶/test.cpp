#include<iostream>
#include<vector>
using namespace std;

int jumpFloorII(int n) {
	if (n < 0)
		return -1;
	else if (n <= 2)
		return n;
	return jumpFloorII(n - 1) * 2;
}
int main(){
	int n;
	while (cin >> n){
		int ret = jumpFloorII(n);
		cout << ret << endl;
	}
}