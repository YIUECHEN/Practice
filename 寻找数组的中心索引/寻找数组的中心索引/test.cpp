#include<iostream>
#include<vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
	if (nums.size() == 0) return -1;
	int left=0;
	int right = 0;
	for (int i = 1; i < nums.size(); i++){
		right += nums[i];
	}
	for (int i = 0; i < nums.size() - 1; i++){
		if (right == left) return i;
		right = right - nums[i + 1];
		left += nums[i];
	}
	if (left == right) return nums.size() - 1;
	else return -1;

}

int main(){
	vector<int> v = { 1, 3, 2, 4, 7, 6, 11 };
	system("pause");
	return 0;
}