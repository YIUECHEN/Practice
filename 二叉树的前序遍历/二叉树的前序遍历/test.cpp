#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
//vector<int> preorderTraversal(TreeNode* root) {
//	vector<int> ans;
//	TreeNode *node = root;
//	while (node){
//		if (node->left == NULL){
//			ans.emplace_back(node->val);
//			node = node->right;
//		}
//		else{
//			TreeNode *pre = node->left;
//			while (pre->right != NULL && pre->right != node){
//				pre = pre->right;
//			}
//			if (pre->right == NULL){
//				pre->right = node;
//				ans.emplace_back(node->val);
//				node = node->left;
//			}
//			else{
//				pre->right = NULL;
//				node = node->right;
//			}
//
//		}
//	}
//	return ans;
//}
#if 0
void fun(TreeNode* root, vector<int> v){
	if (root == NULL) return;
	v.emplace_back(root->val);
	fun(root->left);
	fun(root->right);
}

vector<int> preorderTraversal(TreeNode* root) {
	vector<int> v;
	fun(root, v);
	return v;
}

int main(){
	return 0;
}
#endif

vector<int> preorderTraversal(TreeNode* root) {
	stack<TreeNode*> s;
	vector<int> v;
	while (root || s.size()){
		while (root){
			s.push(root);
			v.emplace_back(root->val);
			root = root->left;
		}
		root = s.top();
		s.pop();
		root = root->right;
	}
	return v;
}
int main(){

	return 0;
}