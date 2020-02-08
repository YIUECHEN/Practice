#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//int findUnsortedSubarray(vector<int>& nums) {
//	int len = nums.size();
//	int i, j;
//	int max_val, min_val;
//	/*从头部找降序序列中的最小值*/
//	bool flag = 1;
//	for (i = 0; i < len - 1; i++){
//		if (nums[i] > nums[i + 1])
//			flag = 0;
//		if (!flag)
//			min_val = min(min_val, nums[i + 1]);
//	}
//
//	/*从尾部找升序序列中的最大值*/
//	flag = 0;
//	for (j = len - 1; j > 0; j--){
//		if (nums[j] < nums[j - 1])
//			flag = 1;
//		if (flag )
//			max_val = max(max_val, nums[j - 1]);
//	}
//
//	/*找到min_val的正确位置*/
//	for (i = 0; i < len && nums[i] <= min_val; i++);
//
//	/*找到max_val的正确位置*/
//	for (j = len - 1; j >= 0 && nums[j] >= max_val; j--);
//
//	int ans = j - i;
//	return (ans > 0) ? ans + 1 : 0;
//}   
int findUnsortedSubarray(vector<int>& nums) {
	vector<int> temp(nums.begin(), nums.end());
	sort(temp.begin(), temp.end());
	int i = 0, j = temp.size() - 1;
	while (i<j){
		int flag = 1;
		if (temp[i] == nums[i]){ i++; flag = 0; }
		if (temp[j] == nums[j]){ j--; flag = 0; }
		if (flag == 1)break;
	}
	if (i >= j)return 0;
	return j - i + 1;
}
int main(){
	vector<int> v = { 2, 6, 4, 8, 10, 9, 15 };
	cout << findUnsortedSubarray(v) << endl;
	system("pause");
	return 0;

}