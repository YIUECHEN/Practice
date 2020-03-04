#include<iostream>
using namespace std;
int M[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int N[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
bool isPrimeNumber(int month)
{
	int num = 0;
	for (int k = 2; k < month; k++)
	{
		if (month%k == 0)
		{
			num++;
		}
	}
	if (num == 0)
		return true;
	else
		return false;
}
bool isLeap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}
int CalSingleYearMoney(int year)
{
	if (isLeap(year))
	{
		return (M[1] + M[2] + M[4] + M[6] + M[10]) + (M[0] + M[3] + M[5] + M[7] + M[8] + M[9] + M[11]) * 2;
	}
	else
	{
		return (N[1] + N[2] + N[4] + N[6] + N[10]) + (N[0] + N[3] + N[5] + N[7] + N[8] + N[9] + N[11]) * 2;
	}
}

int main()
{
	int year1 = 0, year2 = 0;
	int month1 = 0, month2 = 0;
	int day1 = 0, day2 = 0;


	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
	{
		int sum = 0;
		int year = year1;
		for (year; year <= year2 - 1; year++)
		{
			sum += CalSingleYearMoney(year);
		}
		for (int i = 0; i <= month1 - 1; i++)
		{
			int temp = 0;
			if (i == month1 - 1)
				temp = day1 - 1;
			else
				if (isLeap(year))
				{
				temp = M[i];
				}
				else
				{
					temp = N[i];
				}
			if (i != 1 && i != 2 && i != 4 && i != 6 && i != 10)
				sum -= 2 * temp;
			else
				sum -= temp;
		}
		year = year2;
		for (int i = 0; i <= month2 - 1; i++)
		{

			int temp = 0;
			if (i == month2 - 1)
				temp = day2;
			else
				if (isLeap(year))
				{
				temp = M[i];
				}
				else
				{
					temp = N[i];
				}
			if (i != 1 && i != 2 && i != 4 && i != 6 && i != 10)
				sum += 2 * temp;
			else
				sum += temp;
		}
		cout << sum << endl;
	}
	return 0;
}