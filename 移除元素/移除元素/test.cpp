#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	int begin = 0, end = nums.size() - 1;
	while (begin < end){
		if (nums[begin] == val&&nums[end] == val){
			end--;
		}
		else if (nums[begin] == val&&nums[end] != val){
			nums[begin] = nums[end];
			begin++;
			end--;
		}
		else if (nums[begin] != val&&nums[end] != val){
			begin++;
		}
		else{
			begin++;
			end--;
		}
	}
	return begin;
}

int main(){ 
	vector<int> v = { 2, 3, 4, 5, 4, 4, 6, 6, 4 };
	int k = 4;
	cout<<removeElement(v, k)<<endl;

	system("pause");
	return 0;
}