#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n, k, m;
	vector<int> v;
	cin >> n >> k;
	int size = n;
	while (n--){
		cin >> m;
		v.push_back(m);
	}
	sort(v.begin(), v.end());
	if (k > pow(size, 2)){
		return 0;
	}
	int x = k / size;
	int y = (k % size)-1;
	printf("(%d,%d)", v[x], v[y]);
	return 0;
	
}