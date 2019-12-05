//#include<iostream>
//#include<vector>
//#include<iomanip>
//using namespace std;
//int a[10005] = { 0, 1, 2, 3 };
//
//void GetRet(int n, vector<int> v){
//	for (int i = 3; i<10005; i++){
//		a[i] = a[i - 1] + a[i - 2];
//		if (a[i]>10000){
//			a[i] %= 10000;
//		}
//	}
//	for (int i = 0; i<n; i++){
//		cout << setw(4) << setfill('0') << a[v[i]];
//	}
//	return;
//
//}
//int main(){
//	int n, m;
//	while (cin >> n){
//		vector<int> v;
//		for (int i = 0; i<n; i++){
//			cin >> m;
//			v.push_back(m);
//		}
//		GetRet(n, v);
//		cout << endl;
//	}
//	return 0;
//}

#include<iostream>
#include<iomanip>
using namespace std;

int getVal(int index)
{
	if (index == 1)
		return 1;
	else if (index == 2)
		return 2;
	int va1 = 1;
	int va2 = 2;
	int cur = 0;
	for (int i = 2; i < index; i++)
	{
		cur = va1 + va2;
		va1 = va2 % 10000;
		va2 = cur % 10000;
	}
	return cur;
}

int main()
{
	int n = 0;
	while (cin >> n)
	{
		int *arr = new int[n]();
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << setw(4) << setfill('0') << getVal(arr[i]) % 10000;
		}
	}
}