#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


TreeNode* _buildTree(vector<int>& ind, vector<int>& postd, int posti, int left, int right){
	if (posti < 0 || left > right){
		return nullptr;
	}

	TreeNode* node = new TreeNode(postd[posti]);
	int index=left;
	while (index<=right){
		if (ind[index] == postd[posti]){
			break;
		}
		++index;
	}

	node->left = _buildTree(ind, postd, posti -(right-index+1), left, index - 1);
	node->right = _buildTree(ind, postd, posti - 1, index + 1, right);
	return node;
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
	int posti = postorder.size() - 1;
	int left = 0;
	int right = inorder.size() - 1;

	return _buildTree(inorder, postorder, posti, left, right);
	
}
int main(){
	vector<int> v1 = { 9, 3, 15, 20, 7 };
	vector<int> v2 = { 9, 15, 7, 20, 3 };
	TreeNode* p=buildTree(v1, v2);
	return 0;
}