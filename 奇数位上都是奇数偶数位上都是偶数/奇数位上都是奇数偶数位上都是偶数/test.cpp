#include<iostream>
#include<vector>
using namespace std;
void oddInOddEvenInEven(vector<int>& arr, int len){
	int i = 0, j = 1;
	while (i < len&&j < len){
		if (arr[len - 1] % 2 == 0){
			swap(arr[i], arr[len - 1]);
			i += 2;
		}
		else{
			swap(arr[j], arr[len - 1]);
			j += 2;
		}

	}
}


int main(){
	vector<int> v = { 1, 2, 3, 4, 5, 6, };
	oddInOddEvenInEven(v, v.size());
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	system("pause");
	return 0;
}