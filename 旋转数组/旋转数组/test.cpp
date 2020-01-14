#include<iostream>
#include<vector>

using namespace std;

//vector<int> rotate(vector<int>& nums, int k) {
//	int len = nums.size();
//   k = k%len;
//	while (k--){
//		int tmp = nums[len - 1];
//		for (int i = len - 2; i>=0; i--){
//			nums[i + 1] = nums[i];
//		}
//		nums[0] = tmp;
//	}
//	return nums;
//}³¬Ê±

vector<int> rotate(vector<int>& nums, int k) {
	int len = nums.size();
	vector<int> v(len, 0);
	for (int i = 0; i < len; i++){
		v[(i + k)%len] = nums[i];
	}
	return v;
}


int main(){
	vector<int> v = { 1, 2, 3, 4, 5 };
	int k = 3;
	vector<int> v1=rotate(v,k);
	for (int i = 0; i < v1.size(); i++){
		cout << v1[i] << endl;
	}
	system("pause");
	return 0;
}