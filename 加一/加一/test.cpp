#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
	for (int i = (int)digits.size() - 1; i >= 0; i--) {
		if (digits[i] == 9) {
			digits[i] = 0;
		}
		else {
			digits[i]++;
			return digits;
		}
	}
	digits.push_back(0);
	digits[0] = 1;
	return digits;
}
int main(){
	vector<int> v = { 4, 3, 2, 1 };
	plusOne(v);
	for (auto e : v){
		cout << e << endl;
	}
	system("pause");
	return 0;
 }