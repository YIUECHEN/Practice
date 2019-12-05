#include<iostream>
#include<string>
using namespace std;
int GetRoot(int n){
	if (n<10){
		return n;
	}
	int sum = 0;
	while (n>0){
		sum += n % 10;
		n /= 10;
	}

	if (sum >= 10){
		sum = GetRoot(sum);
	}
	return sum;
}

int main(){
	string n;
	while (cin >> n){
		int sum = 0;
		for (int i = 0; i<n.size(); i++){
			sum += n[i] - '0';
		}
		int ret = GetRoot(sum);
		cout << ret << endl;
	}
}
