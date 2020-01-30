#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int thirdMax(vector<int>& nums) {
	set<int> s;
	for (int i = 0; i < nums.size(); i++){
		s.insert(nums[i]);
		if (s.size()> 3){
			s.erase(s.begin());
		}
	}
	
	if (s.size()<3){
		return *(s.rbegin());
	}
	else return *(s.begin());
}

//int thirdMax(vector<int>& nums) {
//	sort(nums.begin(), nums.end());
//	vector<int> num(1); 
//	num[0] = nums[0];
//	for (int i = 1; i < nums.size(); i++){
//		if (num.back() != nums[i]){
//			num.push_back(nums[i]);
//		}
//	}
//	if (num.size() == 1) return num[0];
//	else if (num.size() == 2)return num[1];
//	else return nums[num.size() - 3];
//}

int main(){
	vector<int> v = { 2, 4};
	int num=thirdMax(v);
	cout << num << endl;
	system("pause");
	return 0;
}