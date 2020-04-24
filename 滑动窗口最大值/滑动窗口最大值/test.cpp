#include<iostream>
#include<vector>
using namespace std;
vector<int> maxInWindows(const vector<int>& num, unsigned int size)
{
	vector<int> v;
	if (num.empty() || size > num.size() || size < 1)
		return v;
	int max;
	for (int i = 0; i < num.size() - size + 1; i++){
		max = num[i];
		for (int j = i + 1; j<i + size; j++){
			max = max>num[j] ? max : num[j];
		}
		v.push_back(max);
	}
	return v;
}

int main(){
	vector<int> v = { 1, 5, 8, 2, 5, 9, 3, 4, 7 };
	vector<int> ret=maxInWindows(v, 3);
	for (auto e : ret){
		cout << e <<" ";
	}
	return 0;
}