#include<iostream>
#include<vector>
using namespace std;
class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		// write code here
		int un = 0;
		int dn = 0;
		int row = (int)board.size();
		int lin = (int)board[0].size();
		if (row != lin){
			return -1;
		}
		for (int i = 1; i<row; i++){
			board[i][0] += board[i - 1][0];
		}
		for (int i = 1; i<lin; i++){
			board[0][i] += board[0][i - 1];
		}
		for (int i = 1; i<row; i++){
			for (int j = 1; j<lin; j++){
				un = board[i - 1][j];
				dn = board[i][j - 1];
				if (un<dn){
					board[i][j] += dn;
				}
				else{
					board[i][j] += un;
				}
			}
		}
		return board[row - 1][lin - 1];
	}
};
int main(){
	Bonus p;
	vector<vector<int>> v(6, vector<int>(6, 10));
	cout << p.getMost(v) << endl;
	system("pause");
	return 0;
	
}