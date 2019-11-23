#include<iostream>
using namespace std;
bool Is_Divisors(int i,int j){
	if (j%i == 0){

		return true;
	}
	return false;
}

int main(){
	int n, m;
	while (cin >> n >> m){
		int count = 0;
		for (int i = 2; i<=n; i++){
			if (Is_Divisors(i, n)){

			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}