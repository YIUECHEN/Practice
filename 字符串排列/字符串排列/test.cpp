#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> result;

void Permutation1(string str, int begin){
	if (begin == str.length()){
		result.push_back(str);
		return;
	}
	for (int i = begin; str[i] != '\0'; i++){

		if (i != begin&&str[begin] == str[i])
			continue;
		swap(str[begin], str[i]);
		Permutation1(str, begin + 1);
		swap(str[begin], str[i]);
	}

}

vector<string> Permutation(string str) {
	if (str.length() == 0){
		return result;
	}
	Permutation1(str, 0);
	sort(result.begin(), result.end());
	return result;
}

int main(){
	string a = "kjwbhffeasx";
	vector<string> v=Permutation(a);
	for (auto e : v){
		cout << e << endl;
	}
	return 0;
}