#include<iostream>
#include<string>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void _treetostr(TreeNode* t, string& str){
	if (t == nullptr){
		return;
	}
	str += to_string(t->val);
	if (t->left || t->right){
		str += '(';
		_treetostr(t->left, str);
		str += ')';
	}

	if (t->right){
		str += '(';
		_treetostr(t->right, str);
		str += ')';
	}
}
string treetostr(TreeNode* t){
	string str;
	_treetostr(t, str);
	return str;
}

int main(){
	TreeNode a(1);
	TreeNode b(2);
	TreeNode c(3);
	TreeNode d(4);

	a.left = &b;
	a.right = &c;
	b.right = &d;

	string ret=treetostr(&a);
	cout << ret << endl;
 	return 0;
}
