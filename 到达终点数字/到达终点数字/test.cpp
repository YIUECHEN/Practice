#include<iostream>
using namespace std;

int reachNumber(int target) {
	target = abs(target);
	int i = 0;
	while (i*(i + 1) / 2 < target){
		i++;
	}
	if (i*(i + 1) / 2 == target)
		return i;
	else{
		if ((i*(i + 1) / 2 - target) % 2 == 0)return i;
		else{
			if (i % 2 == 0)return i + 1;
			else return i + 2;
		}
	}
}

int main(){
	int num;
	while (cin >> num){
		cout << reachNumber(num) << endl;
	}
	return 0;
}