#include<iostream>
#include<vector>
using namespace std;
int minNumInArray(vector<int> array){
	if (array.size() == 0){
		return 0;
	}
	if (array.size() == 1){
		return array[0];
	}
	for (int i = 0; i < array.size(); i++){
		if (array[i]>array[i + 1]){
			return  array[i + 1];
		}
		else{
			if (i == array.size() - 2){
				return array[0];
			}
		}
	}
}
int main(){
	vector<int> a = { 3, 4, 5, 1, 2, 3 };
	cout<<minNumInArray(a)<<endl;
	return 0;
}
