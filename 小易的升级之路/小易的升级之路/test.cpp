#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b){
	while (b){
		int temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}

int upgrade(vector<int> v, int n){
	for (int i = 0; i < v.size(); i++){
		if (n >= v[i]){
			n += v[i];
		}
		else{
			n += gcd(n, v[i]);
		}
	}
	cout << n << endl;
	return 0;
}

int main(){
	int n,ab,re;
	while (cin >> n >> ab){
		vector<int> mon;
		for (int i = 0; i < n; i++){
			cin >> re;
			mon.push_back(re);
		}
		upgrade(mon, ab);
	}
	return 0;
}