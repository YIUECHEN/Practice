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
	//�Ѿ����������һλ����Ŀǰ�洢�ļ��ϴ���ans��������
	if (n <= 0){
		ans.push_back(tmp);
		return;
	}
	//���һ���������и�Ԫ��
	tmp.push_back(v[n - 1]);
	find(n - 1, v);
	tmp.pop_back();
	//��������������޸�Ԫ��
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