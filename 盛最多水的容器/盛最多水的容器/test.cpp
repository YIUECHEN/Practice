#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

////暴力解法
//int maxArea(vector<int> &height){
//	int ret = 0;
//	for (int i = 0; i < height.size(); i++){
//		for (int j = i + 1; j < height.size(); j++){
//			int wide = j - i;
//			int length = min(height[i], height[j]); //height[i] < height[j] ? height[i] : height[j];
//			int cap = length*wide;
//			ret = max(ret, cap);
//		}
//	}
//	return ret;
//}

//双指针发
int maxArea(vector<int> &height){
	int ret = 0;
	int left = 0;
	int right = height.size() - 1;

	while (left != right){
		int length;
		int wide = right - left;

		if (height[left] < height[right]){
			length = height[left];
			left++;
		}
		else{
			length = height[right];
			right--;
		}
		int cap = wide*length;
		ret = max(ret, cap);
	}
	return ret;
}

int main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(8);
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	cout<<maxArea(v) << endl;
	system("pause");
	return 0;
}