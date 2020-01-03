#include<iostream>
#include<unordered_set>

using namespace std;

unordered_set<int> bobo;
bool isHappy(int n) {
	int sum = 0;
	if (n == 1) return true;
	else if (bobo.count(n))  return false;
	else{
		bobo.insert(n);
		while (n != 0){
			sum = sum + (n % 10) * (n % 10);
			n /= 10;
		}
		n = sum;
	}
	return isHappy(n);
}

int main(){
	int n;
	while (cin >> n){
		if (isHappy(n) == 1){
			cout << "true" << endl;
		}
		else{
			cout << "false" << endl;
		}
	}
	return 0;
}