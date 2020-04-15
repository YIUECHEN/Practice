#include<iostream>
#include<vector>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


TreeNode* _buildTree(vector<int>& pred, vector<int>& ind, int prei, int left, int right){
	if (prei > pred.size()-1 || right <left){
		return nullptr;
	}
	TreeNode* node = new TreeNode(pred[prei]);
	int index = left;
	while (index <= right){
		if (ind[index] == pred[prei]){
			break;
		}
		++index;
	}
	node->left = _buildTree(pred, ind, prei + 1, left, index - 1);
	node->right = _buildTree(pred, ind, prei + (index-left+1), index+1, right);
	return node;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
	int prei=0;
	int left = 0;
	int right = preorder.size()-1;
	return _buildTree(preorder, inorder, prei,left,right);
}

int main(){
	vector<int> v1 = { 3, 9, 20, 15, 7 };
	vector<int> v2 = { 9, 3, 15, 20, 7 };

	TreeNode* p=buildTree(v1, v2);
	return 0;
}