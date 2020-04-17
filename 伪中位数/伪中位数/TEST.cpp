#include<iostream>
#include<vector>
using namespace std;

int getnum(vector<int> v,int k){
	
	int i;
	for (i=0; i < v.size(); i++){
		if (v[i] == k)
			break;
	}
	int index = (v.size() + 1) / 2;
	int count = 0;

	if (index-1 > i){
		while (v[index-1] != k){
			v.insert(v.begin, 0);
			index = (v.size() + 1) / 2;
			count++;
		}
	}
	else if (index-1 < i){
		while (v[index-1] != k){
			v.insert(v.end()-1, k + 1);
			index = (v.size() + 1) / 2;
			count++;
		}
	
	}
	return count;
}

int main(){
	int n, k, m;
	cin >> n >> k;
	vector<int> v;
	while (n--){
		cin >> m;
		v.push_back(m);
	}
	cout << getnum(v, k) << endl;
	return 0;
}