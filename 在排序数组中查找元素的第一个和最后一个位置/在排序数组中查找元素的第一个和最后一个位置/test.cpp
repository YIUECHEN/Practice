#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
	int left = 0, right = nums.size() - 1,mid;
	vector<int> res;
	while (left<right){    //урвС╠ъ╫Г
		mid = left + (right - left) / 2;
		if (nums[mid] == target) right = mid;
		else if (nums[mid]<target) left = mid + 1;
		else right = mid;
	}
	if (left == nums.size() || nums[left] != target) return res = { -1, -1 };
	if (nums[left] == target) res.emplace_back(left);
	right = nums.size();
	while (left<right){    //урср╠ъ╫Г
		mid = left + (right - left) / 2;
		if (nums[mid] == target) left = mid + 1;
		else if (nums[mid]<target) left = mid + 1;
		else right = mid;
	}
	if (nums[right - 1] == target) res.emplace_back(right - 1);
	return res;
}

int main(){
	vector<int> v = { 1, 2, 3, 3, 4, 4, 5, 5, 5, 6 };
	vector<int> vec=searchRange(v,5);
	for (auto e : vec){
		cout << e << endl;
	}
	system("pause");
	return 0;
}