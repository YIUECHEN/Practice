#include<iostream>
#include<string>
#include<set>

using namespace std;

bool isLongPressedName(string name, string typed) {
	int i = 0, j = 0;
	while (name[i] != 0){
		if (name[i] != name[i + 1]){
			if (typed[j] != name[i])return 0;
			while (typed[i + 1] == name[i])j++;
		}
		else if (typed[i] != name[i])return 0;
		i++;
		j++;
	}
	return 1;

}

int main(){
	string s1 = "saaeed";
	string s2 = "saaeeeed";
	cout << isLongPressedName(s1, s2) << endl;
	system("pause");
	return 0;
}