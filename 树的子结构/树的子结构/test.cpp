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

bool isEqual(TreeNode* p1, TreeNode* p2){
	if (p2 == nullptr){
		return true;
	}
	if (p1 == nullptr ){
		return false;
	}
    
	if (p1->val != p2->val){
		return false;
	}
	return  isEqual(p1->left, p2->left) && isEqual(p1->right, p2->right);
}

bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
	if(nullptr == pRoot2 || nullptr == pRoot1)
		return false;
	return isEqual(pRoot1, pRoot2) || HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);

}


int main(){
	TreeNode a(8);
	TreeNode b(1);
	TreeNode c(9);
	TreeNode d(21);
	TreeNode e(14);
	TreeNode f(13);
	TreeNode g(4);
	TreeNode h(2);
	TreeNode i(7);
	TreeNode j(30);
	TreeNode k(26);
	TreeNode l(5);


	a.left = &c;
	a.right = &d;
	c.left = &b;
	c.right = &f;
	d.left = &e;
	d.right = &g;
	b.left = &k;
	b.right = &j;
	f.right = &h;
	g.left = &i;
	g.right = &l;

	TreeNode d1(21);
	TreeNode e1(14);
	TreeNode g1(4);
	TreeNode i1(7);
	d1.left = &e1;
	d1.right = &g1;
	g1.left = &i1;

	if (HasSubtree(&a,&d1)){
		cout << "ÊÇ" << endl;
	}
	else{
		cout << "²»ÊÇ" << endl;

	}
	return 0;

}