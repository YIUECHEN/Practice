#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
vector<int> preorderTraversal(TreeNode* root) {
	vector<int> ans;
	TreeNode *node = root;
	while (node){
		if (node->left == NULL){
			ans.emplace_back(node->val);
			node = node->right;
		}
		else{
			TreeNode *pre = node->left;
			while (pre->right != NULL && pre->right != node){
				pre = pre->right;
			}
			if (pre->right == NULL){
				pre->right = node;
				ans.emplace_back(node->val);
				node = node->left;
			}
			else{
				pre->right = NULL;
				node = node->right;
			}

		}
	}
	return ans;
}


int main(){
	return 0;
}