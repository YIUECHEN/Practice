#include<iostream>
using namespace std;


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int findSecondMinimumValue(TreeNode* root) {
	if (root->left == NULL&&root->right == NULL){
		return -1;
	}

	else {
		if (root->left->val < root->right->val){
			if (root->left->val < root->val){
				return root->left->val;
			}
			else{
				if (root->right->val < root->val)
				return root->right->val;
			}
		}
		else{
			return findSecondMinimumValue(root->left); 
		}
	}
}

int main(){
	TreeNode t1(2),t2(2),t3(3),t4(4),t5(5),t6(6),t7(7);
	t1.left=&t2;
	t1.right = &t3;
	t2.left = &t4;
	t2.right = &t5;
	t3.left = &t6;
	t6.right = &t7;
	cout << findSecondMinimumValue(&t1) << endl;
	system("pause");
	return 0;
}