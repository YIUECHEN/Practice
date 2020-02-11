#include<iostream>
#include<vector>
using namespace  std;
vector<vector<int>> subsets(vector<int>& nums) {
	vector<vector<int>> v;
	v.push_back({});
	int size = nums.size();
	int subsize = pow(2, size);
	int tmp = 1;
	while (tmp < subsize){
		vector<int> temp;
		for (int i = 0; i < size; i++){
			int a = 1 << i;
			if (a&tmp){
				temp.push_back(nums[i]);
			}
		}
		v.push_back(temp);
		tmp++;
	}
	return v;
}

int main(){
	vector<int> v = { 1, 2, 3 };
	subsets(v);
	system("pause");
	return 0;
}