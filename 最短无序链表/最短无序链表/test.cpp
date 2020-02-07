#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findUnsortedSubarray(vector<int>& nums) {
	int len = nums.size();
	int i, j;
	int max_val = 0x80000000, min_val = 0x7fffffff;

	/*��ͷ���ҽ��������е���Сֵ*/
	bool ascending = 1;
	for (i = 0; i < len - 1; i++){
		if (nums[i] > nums[i + 1])
			ascending = 0;
		if (!ascending)
			min_val = min(min_val, nums[i + 1]);
	}

	/*��β�������������е����ֵ*/
	ascending = 0;
	for (j = len - 1; j > 0; j--){
		if (nums[j] < nums[j - 1])
			ascending = 1;
		if (ascending)
			max_val = max(max_val, nums[j - 1]);
	}

	/*�ҵ�min_val����ȷλ��*/
	for (i = 0; i < len && nums[i] <= min_val; i++);

	/*�ҵ�max_val����ȷλ��*/
	for (j = len - 1; j >= 0 && nums[j] >= max_val; j--);

	int ans = j - i;
	return (ans > 0) ? ans + 1 : 0;
}
int main(){
	vector<int> v= { 2, 6, 4, 8, 10, 9, 15 };
	cout<<findUnsortedSubarray(v)<<endl;
	system("pause");
	return 0;

}