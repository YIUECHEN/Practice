#include<iostream>
using namespace std;
//

int getSum(int n, int m){
	//按位与&是查看两个数哪些二进制位都是1，这些都是进位位，结果需要左移一位，表示进位后的结果
	//异或^是查看两个数哪些二进制位只有一个1，这些都是非进位位，结果表示非进位位进行加操作后的操作
	int x, y;
	x = (n&m) << 1;
	y = n^m;
	while (x&y){
		n = x;
		m = y;
		x = (n&m) << 1;
		y = n^m;
	}
	return x|y;
}
int main(){
	int n, m;
	while (cin >> n >> m){
		cout << getSum(n, m) << endl;
	}
	return 0;
}