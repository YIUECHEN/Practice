#include<iostream>
#include<vector>
#include<map>
using namespace std;
int numPairsDivisibleBy60(vector<int>& time) {
	int count[60] = { 0 };
	int len = time.size();
	for (int i = 0; i < len; i++)
		count[time[i] % 60]++;
	int ans = (count[0] * (count[0] - 1) + count[30] * (count[30] - 1)) >> 1;
	for (int i = 1; i < 30; i++)
		ans = ans + count[i] * count[60 - i];
	return ans;
}

int main(){
	vector<int> time;
	time.push_back(30);
	time.push_back(100);
	time.push_back(150);
	time.push_back(40);
	time.push_back(20);

	int ret=numPairsDivisibleBy60(time);
	cout << ret << endl;
	system("pause");
	return 0;
}