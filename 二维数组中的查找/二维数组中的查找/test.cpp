/*��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������
ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ��������
�ж��������Ƿ��и�������
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
		cout << "�ҵ���" << endl;
	}
	else{
		cout << "û��" << endl;

	}
	system("pause");
	return 0;
}