#include<iostream>
#include<vector>
using namespace std;

//class Board {
//public:
//	bool checkWon(vector<vector<int>> board) {
//		if (3==board[0][0] + board[1][1] + board[2][2]){
//			return true;
//		}
//		if (3 == board[0][2] + board[1][1] + board[2][0]){
//			return true;
//		}
//		for (int i = 0; i < 3; i++){
//			if (3 == board[i][0] + board[i][1] + board[i][2]){
//				return true;
//			}
//		}
//		
//		for (int j = 0; j < 3; j++){
//			if (3 == board[0][j] + board[1][j] + board[2][j]){
//				return true;
//			}
//		}
//		return false;
//	}
//};

class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		// write code here
		int len = board.size();
		int sum = 0;
		for (int i = 0; i < len; i++){
			for (int j = 0; j < len; j++){
				sum += board[i][j];
				if (3 == sum){
					return true;
				}
				return false;
			}
		}
		
			for (int i = 0; i < len; i++){
				sum += board[i][i];
				if (3 == sum){
					return true;
				}
				return false;
			}

			for (int i = 0; i < len; i++){
				sum += board[i][len-i-1];
				if (3 == sum){
					return true;
				}
				return false;
			}
	}
};

int main(){
	Board p;
	vector<vector<int>> w = { { -1, 0, 1 }, { 0, 1, -1 }, {1,-1, 0 } };
	if (!p.checkWon(w)){
		cout << "true";
	}
	system("pause");
	return 0;
}