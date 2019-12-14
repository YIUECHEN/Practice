#include<iostream>
#include<string>
#include<vector>

using namespace std;
vector<int> shortestToChar(string S, char C) {
	vector<int>Cpos;
	for (int i = 0; i<S.length(); ++i){
		if (S[i] == C)
			Cpos.push_back(i);
	}
	vector<int>array;
	for (int i = Cpos[0]; i >= 0; --i){//根据第一个字符位置
		array.push_back(i);
	}
	for (int i = 0; i<Cpos.size() - 1; ++i){//根据中间两个相连的字符位置
		if ((Cpos[i + 1] - Cpos[i]) == 1){
			array.push_back(0);
		}
		else if ((Cpos[i + 1] - Cpos[i]) == 2){
			array.push_back(1);
			array.push_back(0);
		}
		else{
			for (int j = 1; j <= (Cpos[i + 1] - Cpos[i]) / 2; ++j){
				array.push_back(j);
			}
			for (int j = ((Cpos[i + 1] - Cpos[i]) % 2 == 0 ? (Cpos[i + 1] - Cpos[i]) / 2 - 1 : (Cpos[i + 1] - Cpos[i]) / 2); j >= 0; --j){
				array.push_back(j);
			}
		}
	}
	for (int i = 1; i<S.length() - Cpos[Cpos.size() - 1]; ++i){//根据最后一个字符位置
		array.push_back(i);
	}
	return array;
}

int main(){
	string s = "qwertqeftye";

	vector<int> v=shortestToChar(s, 'e');
	for (auto e : v){
		cout << e <<" ";
	}
	cout << endl;

	system("pause");
	return 0;
}