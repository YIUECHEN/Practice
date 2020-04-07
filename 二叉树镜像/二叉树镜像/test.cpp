#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};

void Mirror(TreeNode *pRoot) {
	if (pRoot == nullptr){
		return;
	}
	TreeNode *temp = pRoot->left;
	pRoot->left = pRoot->right;
	pRoot->right = temp;
	Mirror(pRoot->left);
	Mirror(pRoot->right);
}

int main(){
	TreeNode a(3);
	TreeNode b(4);
	TreeNode c(2);
	TreeNode d(6);
	TreeNode e(9);

	a.left = &b;
	a.right = &c;
	b.left = &d;
	c.right = &e;
	Mirror(&a);
	return 0;
}