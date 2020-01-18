#include<iostream>
#include<vector>
#include<map>
#include<set>

using namespace std;
//bool containsDuplicate(vector<int>& nums) {
//	map<int, int> m;
//	for (int i = 0; i < nums.size(); i++){
//		m[nums[i]]++;
//	}
//	for (int i = 0; i < m.size(); i++){
//		if (m[i] > 1){
//			return true;
//		}
//	}
//	return false;
//}
bool containsDuplicate(vector<int>& nums){
	set<int> s(nums.begin(), nums.end());
	if (s.size() != nums.size()){
		return true;
	}
	return false;
}

int main(){
	vector<int> v = {2,3,1};
	if (containsDuplicate(v)){
		cout << true<< endl;

	}
	else{
		cout << false << endl;

	}

	system("pause");
	return 0;
}