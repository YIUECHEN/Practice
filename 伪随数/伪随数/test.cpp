#include<iostream>
#include<map>

using namespace std;

int main(){
	int a, b, m, x;
	map<int, int> mp;
	cin >> a >> b >> m >> x;
	while (1){
		x = (a*x + b) % m;
		mp[x]++;
		if (mp[x]>1){
			break;
		}
	}
	cout << mp.size() << endl;
	return 0;
}

