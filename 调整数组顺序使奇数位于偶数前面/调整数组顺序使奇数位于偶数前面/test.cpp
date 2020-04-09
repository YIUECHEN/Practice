#include<iostream>
#include<vector>

using namespace std;

//void reOrderArray(vector<int> &array) {
//	vector<int> a1;
//	vector<int> a2;
//
//	for (int i = 0; i<array.size(); i++){
//		if (array[i] % 2 == 1){
//			a1.push_back(array[i]);
//		}
//		if (array[i] % 2 == 0){
//			a2.push_back(array[i]);
//		}
//	}
//	for (int i = 0; i < a2.size(); i++){
//		a1.push_back(a2[i]);
//	}
//	array = a1;
//}

void reOrderArray(vector<int> &array) {
	vector<int> temp;
	vector<int>::iterator it1 = array.begin();
	while (it1 != array.end()){
		if (*it1 % 2 == 0){
			temp.push_back(*it1);
			it1=array.erase(it1);
		}
		else{
			*it1++;
		}
	}
	vector<int>::iterator it2 = temp.begin();
	while (it2 != temp.end()){
		array.push_back(*it2);
		it2++;
	}
}



int main(){
	vector<int> array = { 2, 4, 1, 6, 8, 3, 9, 5, 6, 3 };
	reOrderArray(array);
	for (int i = 0; i < array.size(); i++){
		cout << array[i] << " ";
	}
	return 0;
}