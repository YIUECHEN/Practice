#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		/*sort(gifts.begin(), gifts.end());
		int count = 0;
		for (int i = 0; i<gifts.size(); i++){
		if (gifts[i] == gifts[n / 2]){
		count++;
		}
		}
		if (count>n / 2){
		return gifts[n / 2];
		}
		return 0;

		}*/
		map<int, int> m;
		for (int i = 0; i < gifts.size(); i++){
			m[gifts[i]]++;
		}
		int temp = n / 2;
		for (auto& e : m){
			if (e.second>temp){
				return e.first;
			}
			
		}
		return 0;
	}
};
int main(){
	Gift g;
	vector<int> v{ 1, 2, 3, 2, 2, 5 };
	int n = 5;
	int ret=g.getValue(v,n);
	cout << ret << endl;
	system("pause");
	return 0;
}