#include<iostream>
#include<vector>
#include<set>

using namespace std;


	int singleNumber(vector<int>& nums) {
		int len = nums.size();

		set<int> s;

		int sum1 = 0;
		int sum2 = 0;
		for (int i = 0; i<len; i++)
		{
			sum1 += nums[i];
			if (s.count(nums[i]) == 0)
			{
				s.insert(nums[i]);
				sum2 += nums[i];
			}
		}
		return 2 * sum2 - sum1;

	}


int main(){
	vector<int> v = { 1, 2, 3, 4, 1, 3, 4 };
	cout << singleNumber(v) << endl;
	system("pause");
	return 0;
}