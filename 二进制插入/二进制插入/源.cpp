#include<iostream>
using namespace std;


class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		// write code here
		m=m << j;
		int ret = n | m;
		return ret;
	}
};
int main()
{
	BinInsert b;
	int n = 1024;
	int m = 19;
	int j = 2;
	int i = 6;
	cout << b.binInsert(n, m, j, i) << endl;
	system("pause");
	return 0;

}