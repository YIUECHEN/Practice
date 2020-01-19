#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& A) {
	int len = A.size();
	vector<int> res(len);
	int i = 0, j = len - 1, k = len - 1;
	while (k >= 0){
		int a = pow(A[i], 2);
		int b = pow(A[j], 2);
		if (a > b){
			res[k] = a;
			i++;
		}
		else{
			res[k] = b;
			j--;
		}
		k--;
	}
	return res;
}
int main(){
	vector<int> a = { -4, -1, 0, 3, 5 };
	vector<int> b=sortedSquares(a);
	for (auto e : b){
		cout << e << endl;
	}
	system("pause");
	return 0;
}