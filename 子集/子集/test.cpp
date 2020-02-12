#include<iostream>
#include<vector>
using namespace  std;
//vector<vector<int>> subsets(vector<int>& nums) {
//	vector<vector<int>> v;
//	v.push_back({});
//	int size = nums.size();
//	int subsize = pow(2, size);
//	int tmp = 1;
//	while (tmp < subsize){
//		vector<int> temp;
//		for (int i = 0; i < size; i++){
//			int a = 1 << i;
//			if (a&tmp){
//				temp.push_back(nums[i]);
//			}
//		}
//		v.push_back(temp);
//		tmp++;
//	}
//	return v;
//}

vector<vector<int>> ans;
vector<int> tmp;
void find(int n, vector<int> v){
	//已经处理完最后一位，将目前存储的集合存入ans，并回溯
	if (n <= 0){
		ans.push_back(tmp);
		return;
	}
	//情况一：集合中有该元素
	tmp.push_back(v[n - 1]);
	find(n - 1, v);
	tmp.pop_back();
	//情况二：集合中无该元素
	find(n - 1, v);

}
vector<vector<int>> subsets(vector<int>& nums){
	find(nums.size(), nums);
	return ans;
}

int main(){
	vector<int> v = { 1, 2, 3 };
	subsets(v);
	system("pause");
	return 0;
}