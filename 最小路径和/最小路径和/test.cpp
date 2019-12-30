#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minPathSum(vector<vector<int>>& grid) {
	//��̬�滮DP������ֱ����ԭ�������޸�
	for (int i = 0; i<grid.size(); i++){//������
		for (int j = 0; j<grid[0].size(); j++){//������
			if (i == 0 && j == 0) continue;
			else if (i == 0) grid[i][j] += grid[i][j - 1];//���ڵ�һ�б߽�Ԫ�����⴦��ֻ�ܴ���ߵ�Ԫ�صõ���ǰ�����·����
			else if (j == 0) grid[i][j] += grid[i - 1][j];//���ڵ�һ�б߽�Ԫ�����⴦��ֻ�ܴ������Ԫ�صõ���ǰ�����·����
			else grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);//һ��Ԫ��ȡ����������Ԫ�ص���Сֵ
		}
	}
	return grid[grid.size() - 1][grid[0].size() - 1];
}


int main(){
	vector<vector<int>> v = { {1,1,3}, {1,5,1}, {4,2,1} };
	cout << minPathSum(v) << endl;
	system("pause");
	return 0;
}