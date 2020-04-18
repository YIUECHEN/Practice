#include<iostream>
#include<vector>
#include<set>
using namespace std;

int getnumber(vector<vector<int>> vv,int n,int m){
	set<int> ret;
	for (int i = 0; i < n; i++){
		int max = 0;
		int k = 0;
		for (int j = 0; j < m; j++){
			if (max < vv[i][j]){
				max = vv[i][j];
				k = j;
			}
		}
		ret.insert(k);
	}
	return ret.size();
}
int main(){
	int n, m, grade;
	vector<vector<int>> vv;
	cin >> n >> m;
	int i = n;
	int j = m;
	while (n--){
		int k = m;
		vector<int> gr;
		while (k--){
			cin >> grade;
			gr.push_back(grade);
		}
		vv.push_back(gr);
	}
	cout<<getnumber(vv, i, j)<<endl;
	
	return 0;
}