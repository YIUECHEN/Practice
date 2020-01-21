#include<iostream>
#include<vector>

using namespace std;
vector<int> sortArrayByParity(vector<int>& A) {
	int i = 0;
	int j = A.size()-1;
	while (i<j){
		while (i<A.size()&&A[i] % 2 == 0){
			i++;
		}
		while (j >= 0&&A[j] % 2 != 0){
			j--;
		}
		if (i >= j){
			break;
		}
		swap(A[i], A[j]);
	}
	return A;
}

int main(){
	vector<int> v = { 2, 3, 1, 4 };
	vector<int> pv=sortArrayByParity(v);
	for (auto e : pv){
		cout << e << endl;
	}
	system("pause");
	return 0;
}