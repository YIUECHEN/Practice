#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
	int len = vin.size();
	if (len == 0){
		return NULL;
	}
	vector<int> lpre, rpre,lvin, rvin;

	int pos = 0;
	TreeNode* head = new TreeNode(pre[0]);
	for (int i = 0; i<len; i++){
		if (vin[i] == pre[0]){
			pos = i;
			break;
		}
	}
	for (int i = 0; i<pos; i++){
		lpre.push_back(pre[i + 1]);
		lvin.push_back(vin[i]);
	}
	for (int i = pos + 1; i<len; i++){
		rpre.push_back(pre[i]);
		rvin.push_back(vin[i]);
	}
	head->left = reConstructBinaryTree(lpre, lvin);
	head->right = reConstructBinaryTree(rpre, rvin);
	return head;
}
int main(){
	vector<int> pre = { 1, 2, 4, 7, 3, 5, 6, 8 };
	vector<int> vin = { 4, 7, 2, 1, 5, 3, 8, 6 };
	TreeNode* a = reConstructBinaryTree(pre, vin);
	
	system("pause");
	return 0;
}