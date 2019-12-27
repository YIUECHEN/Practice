#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

////±©Á¦·¨
//int maxSubArray(vector<int>& nums) {
//	int max = nums[0];
//	for (int i = 0; i<nums.size(); i++){
//		int sum = 0;
//		for (int j = i; j<nums.size(); j++){
//			sum += nums[j];
//			if (sum>max){
//				max = sum;
//			}
//		}
//	}
//	return max;
//}

int maxSubArray(vector<int>& nums) {
	vector<int> dp(nums.size());
	dp[0] = nums[0];
	int maxsum = dp[0];
	for (int i = 1; i < nums.size(); i++){
		dp[i] = max(dp[i-1] + nums[i], nums[i]);
		maxsum = max(dp[i], maxsum);
	}
	return maxsum;
}

int main(){
	vector<int> v;
	v.push_back(-2);
	v.push_back(1);
	v.push_back(-3);
	v.push_back(4);
	v.push_back(-1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(-5);
	v.push_back(4);

	cout << maxSubArray(v) << endl;

	system("pause");
	return 0;
}
