#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Gloves{
public:
	int fingMinimum(int n,vector<int> left,vector<int> right){
	
		int leftMin = 26, rightMin = 26;
		int sum = 0, leftSum = 0, rightSum = 0;
		for (int i = 0; i < n; i++){
			if (left[i] * right[i] == 0){
				sum += left[i];
				sum += right[i];
			}
			else{
				leftSum += left[i];
				rightSum += right[i];
				
				leftMin = min(leftMin, left[i]);
				rightMin = min(rightMin, right[i]);
			}

		}
		sum += min(leftSum - leftMin + 1, rightSum - rightMin + 1)+1;
		return sum;
	}

};

int main()
{
	Gloves g;
	cout<<g.fingMinimum(4, { 0, 7, 1, 6 }, { 1, 5, 0, 6 })<<endl;
	system("pause");
	return 0;
}