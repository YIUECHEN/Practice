#include<iostream>
using namespace std;
int getCount(int n){
	int count = 0;
	if (n == 1){
		return 1;
	}
	else if(n==2){
		return 1;
	}
	else{
		return getCount(n - 1) + getCount(n - 2);
	}
	
}
int main(){
	int month;
	while (cin >> month){
		int sum=getCount(month);
		cout << sum << endl;
	}
	return 0;
}
