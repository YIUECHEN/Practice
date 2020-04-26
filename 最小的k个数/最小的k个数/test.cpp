#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
	vector<int> res;
	if (input.size() == 0 || k == 0 || k>input.size())return res;

	sort(input.begin(), input.end());
	for (int i = 0; i<k; i++){
		res.push_back(input[i]);
	}
	return res;
}

int main(){
	vector<int> v = { 3, 16, 25, 37, 36, 23, 61, 58, 29, 67, 43, 24 };
	vector<int> res=GetLeastNumbers_Solution(v, 6);
	for (auto e : res){
		cout << e << endl;
	}
	return 0;
}