#include<iostream>
#include<vector>
using namespace std;
#if 0
bool Find(int target, vector<vector<int>> array) {
	int row = array.size();
	int col = array[0].size();
	if (col == 0 || array[0][0] > target || array[row-1][col-1] < target){
		return false;
	}
	for (int i = 0, j = col - 1; i <row&&j >= 0;){
		if (array[i][j] == target){
			return true;
		}
		else if (target>array[i][j]){
			i++;
		}
		else if (target < array[i][j]){
			j--;
		}
	}
	return false;
}
#endif
bool Find(int target, vector<vector<int>> array) {
	for (int i = 0; i < array.size(); i++){
		int l = 0, r = array[0].size()-1;
		while (l <= r){
			int mid = (r + l) / 2 ;
			if (array[i][mid] < target){
				l = mid+1;
			}
			else if (array[i][mid]>target){
				r = mid-1;
			}
			else{
				return true;
			}
		}
		
	}
	return false;
}

int main(){
	vector<vector<int>> a = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int n =90;
	if (Find(n, a) == true){
		cout << "找到了！" << endl;
	}
	else{
		cout << "没找到！" << endl;
	}
	system("pause");
	return 0;
}