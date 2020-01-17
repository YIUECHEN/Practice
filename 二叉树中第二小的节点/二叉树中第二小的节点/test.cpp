#include<iostream>
#include<algorithm>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:

	int base;
	int res;
	int findSecondMinimumValue(TreeNode* root) {
		base = root->val;
		res = base;
		fun(root);
		return res == base ? -1 : res;
	}
	void fun(TreeNode* node){
		if (node){
			if (node->val > base){
				if (res == base){
					res = node->val;
				}
				else{
					res = min(res, node->val);
				}
				return;

			}
			fun(node->left);
			fun(node->right);
		}
	}
};



int main(){
	TreeNode t1(2), t2(2), t3(3), t4(4), t5(5), t6(6), t7(7);
	t1.left = &t2;
	t1.right = &t3;
	t2.left = &t4;
	t2.right = &t5;
	t3.left = &t6;
	t6.right = &t7;
	Solution s;
	cout << s.findSecondMinimumValue(&t1) << endl;
	system("pause");
	return 0;
}