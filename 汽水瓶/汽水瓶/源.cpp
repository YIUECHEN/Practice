#include<iostream>
using namespace std;

//int getCount(int n){
//	if (n==1){
//		return 0;
//	}
//	else if (n == 2 || n == 3){
//		return 1;
//	}
//	else{
//		return getCount(n - 2)+1;
//	}
//}
//int main(){
//	int num;
//	int count;
//	while (cin >> num){
//
//		count = getCount(num);
//		cout << count << endl;
//	}
//	return 0;
//}

int main(){
	int n;
	while (cin >> n){
		if (n == 0){
			break;
		}
		int a, b;
		int count = 0;
		while (n >= 3){
			a = n / 3;
			b = n % 3;
			count += a;
			n = a + b;
		}
		if (n == 2){
			count += 1;
		}
		cout << count << endl;
	}
}