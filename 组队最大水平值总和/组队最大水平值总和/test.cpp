#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	cout << "������������";
	int n;
	cin >> n;
	int sum = 0;

	vector<int> a;
	a.resize(3 * n);
	cout << "����ѡ��ˮƽֵ��";
	for (int i = 0; i < (3 * n); i++){
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	for (int i = 0; i < (3 * n); i++){
		cout<< a[i];
	}
	cout << endl;
	for (int i = n; i < (3 * n - 1); i += 2){
		sum += a[i];
	}
	cout << sum << endl;
	system("pause");
	return 0;
}