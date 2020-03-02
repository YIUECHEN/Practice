#include<iostream>
using namespace std;
int weektodays(int year, int month, int c, int w, bool b){
	int d, week, i;
	if (month == 1){
		month = 13;
		year--;
	}
	if (month == 2){
		month = 14;
		year--;
	}
	i = 0;
	for (d = b ? 1 : 31; d <= b ? 31 : 1; b ? (d++) : (d--)){
		week = (d + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
		if (week + 1 == w)++i;
		if (i == c)break;
	}
	return d;
}

int main(){
	int year;
	while (cin >> year){
		cout << year << "-01-01" << endl;
		printf("%d-01-%d", year, weektodays(year, 1, 3, 1, 1));
		printf("%d-02-%d", year, weektodays(year, 2, 3, 1, 1));
		printf("%d-05-%d", year, weektodays(year, 5, 1, 1, 0));
		cout << year << "-07-04" << endl;
		printf("%d-09-%d", year, weektodays(year, 9, 1, 1, 1));
		printf("%d-11-%d", year, weektodays(year, 11, 4, 4, 1));
		cout << year << "-012-25" << endl;
	}
	system("pause");
	return 0;
}