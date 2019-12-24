#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//	for (int i = m, j = 0; i < m + n; i++, j++){
//		nums1[i] = nums2[j];
//	}
//	sort(nums1.begin(), nums1.end());
//}
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int p = 0, i = 0, j = 0;
	vector<int> temp(nums1.begin(), nums1.end());
	while (i < m&&j < n){
		nums1[p++] = (temp[i]>nums2[j]) ? nums2[j++] : temp[i++];
	}
	while (i < m){
		nums1[p++] = temp[i++];
	}
	while (j < n){
		nums1[p++] = nums2[j++];
	}
}

int main(){

	return 0;
}