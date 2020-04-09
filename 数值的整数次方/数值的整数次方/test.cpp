#include<iostream>
#include<algorithm>

using namespace std;


//double Power(double base, int exp) {
//	if (base == 0){
//		if (exp < 0){
//			throw "Invalid input!";
//		}
//		if (exp >= 0){
//			return 0;
//		}
//	}
//	else{
//		if (exp == 0){
//			return 1;
//		}
//		else if (exp > 0){
//			return pow(base, exp);
//		}
//		else{
//			return 1 / pow(base, -exp);
//		}
//	}
//	return 0; 
//}


double Power(double base, int exp) {
	int p = abs(exp);
	double ret = 1.0;
	while (p){
		if (p & 1){
			ret *= base;
		}
		base *= base;
		p >>= 1;
	}
	return exp > 0 ? ret : 1 / ret;
}


int main(){
	int n, m;
	while (cin >> n >> m){
		try{
			cout << Power(n, m) << endl;
		}
		catch(const char* errmeg){
			cout << errmeg << endl;
		}
	}
	return 0;
}