#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool lengths(string s, vector<string> vs)
{
	int i = 0;
	while ((i + 1) < vs.size())
	{
		if (vs[i].size() >= vs[i + 1].size())
		{
			return false;
		}
		i++;
	}
	return true;
}

bool lexicographically(string s, vector<string> vs)
{
	int i = 0;
	int flag = 2;
	while ((i + 1) < vs.size())
	{
		if (vs[i].compare(vs[i + 1]) >= 0)
		{
			return false;
		}
		i++;
	}
	return true;
}

int main()
{
	string s;
	vector<string> vs;
	int n, i = 0;
	cin >> n;

	bool t1, t2;

	while (i<n)
	{
		cin >> s;
		vs.push_back(s);
		i++;
	}

	t1 = lengths(s, vs);
	t2 = lexicographically(s, vs);

	if (t1 && !t2)
	{
		cout << "lengths" << endl;
	}
	else if (t2 && !t1)
	{
		cout << "lexicographically" << endl;
	}
	else if (t1 && t2)
	{
		cout << "both" << endl;
	}
	else
	{
		cout << "none" << endl;
	}

	system("pause");
	return 0;
}