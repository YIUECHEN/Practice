#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MoreThanHalfNum_Solution(vector<int> numbers) {
	if (numbers.empty()){
		return 0;
	}
	sort(numbers.begin(), numbers.end());
	int count = 0;
	int mid = numbers.size() / 2;
	int midnum = numbers[mid];

	for (int i = 0; i<numbers.size(); i++){
		if (numbers[i] == midnum){
			count++;
		}
	}
	return (count>mid) ? midnum : 0;
}

int main(){
	vector<int> v = { 4, 6, 3, 4, 5, 4, 7, 3, 4, 4, 4, 0, 4 };
	int res = MoreThanHalfNum_Solution(v);
	cout << res << endl;
	return 0;
}