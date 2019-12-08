/*在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，
每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，
判断数组中是否含有该整数。
*/
#include<iostream>
#include<vector>
using namespace std;

bool Find(int target, vector<vector<int> > array) {
	for (int i = 0; i<array.size(); i++){
		for (int j = 0; j<array[0].size(); j++){
			if (target == array[i][j]){
				return true;
			}
		}
	}
	return false;
}


int main(){
	vector<vector<int>> array = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } ,{13,14,15,16} };
	int a = 99;
	if (Find(a,array)){
		cout << "找到了" << endl;
	}
	else{
		cout << "没有" << endl;

	}
	system("pause");
	return 0;
}