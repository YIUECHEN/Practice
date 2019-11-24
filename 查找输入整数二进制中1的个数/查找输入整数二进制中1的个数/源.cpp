#include<iostream>
using namespace std;
//int findNumberOf1(int n){
//	int count = 0;
//	while (n){
//		if(n%2==1)
//			count++;
//		n = n / 2;
//	}
//	if (n)
//		count++;
//	return count;
//}

//int findNumberOf1(int n){
//	int count = 0;
//	while (n){
//		if (n & 1==1)
//			++count;
//		n >>= 1;
//	}
//	return count;
//}


int findNumberOf1(int n){
	int count = 0;
	while (n){
		n = n&(n - 1);
		count++;
	}

	return count;
}



int main(){
	int n;
	while (cin >> n){
		cout << findNumberOf1(n) << endl;
	}
	return 0;
}