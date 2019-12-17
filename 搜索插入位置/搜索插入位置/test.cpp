#include<iostream>
#include<vector>
#include<set>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
	int len = nums.size();
	if (len == 0) return 0;
	for (int i = 0; i<len; i++)
	{
		if (nums[i] >= target) return i;
	}
	return len;
}

int main(){
	vector<int> num;
	num.push_back(1);
	num.push_back(3);
	num.push_back(6);
	num.push_back(5);

	cout << searchInsert(num, 2) << endl;
	system("pause");
	return 0;
}