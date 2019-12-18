//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数
//并返回他们的数组下标。你不能重复利用这个数组中同样的元素。


#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& num, int target) {
	vector<int> ret;
	for (int i = 0; i < num.size(); i++){
		int res = target - num[i];
		for (int j = i + 1; j < num.size(); j++){
			if (num[j] == res){
				ret.push_back(i);
				ret.push_back(j);

			}
		}
	}
	return ret;
}

int main(){
	vector<int> v;
	v.push_back(2);
	v.push_back(4);
	v.push_back(7);
	v.push_back(11);
	int num = 9;
	vector<int> ret=twoSum(v,num);
	for (auto e : ret){
		cout << e<<" ";
	}
	cout << endl;
	system("pause");
	return 0;
}