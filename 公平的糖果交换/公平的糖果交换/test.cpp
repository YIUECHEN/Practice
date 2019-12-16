#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
	if (A.empty() || B.empty()) {
		return vector<int>();
	}
	int sum_a = accumulate(A.begin(), A.end(), 0);
	int sum_b = accumulate(B.begin(), B.end(), 0);
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	vector<int> res;
	int first = 0, second = 0;
	while (true) {
		int a = sum_a + B[second] - A[first];
		int b = sum_b + A[first] - B[second];
		if (a > b) {
			first += 1;
		}
		else if (a < b) {
			second += 1;
		}
		else {
			res.push_back(A[first]);
			res.push_back(B[second]);
			break;
		}
	}
	return res;
}

int main(){
	int a[] = { 1, 2, 3 };
	int b[] = { 2, 3, 3 };
	vector<int> A(a, a + sizeof(a) / sizeof(int));
	vector<int> B(b, b + sizeof(b) / sizeof(int));
	vector<int> res=fairCandySwap(A, B);
	for (vector<int>::iterator it = res.begin(); it != res.end(); ++it)
		cout << *it<<" ";
    cout <<endl;
	system("pause");
	return 0;
}