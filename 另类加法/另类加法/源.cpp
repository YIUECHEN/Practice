#include<iostream>
using namespace std;

class UnusualAdd {
public:
	int addAB(int A, int B) {
		int xor, and;
		while (B!=0){
			xor = A^B;
			and = (A&B) << 1;
			A = xor;
			B = and;

		}
		return A;
	}
};

int main(){

	UnusualAdd a;
	cout<<a.addAB(7, 8)<<endl;
	system("pause");
	return 0;
}