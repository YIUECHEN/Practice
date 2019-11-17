#include<iostream>

using namespace std;
class LCA {
public:
	int getLCA(int a, int b) {
		// write code here
		while (a!=b){
			if (a > b){
				a /= 2;
			}
			if (a < b){
				b /= 2;
			}
		}
		return a;
	}
};

int main(){
	return 0;

}