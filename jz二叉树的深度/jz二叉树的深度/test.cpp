#include<iostream>
using namespace std;
struct Node{
	int val;
	Node *left = nullptr;
	Node *right = nullptr;
	Node(int n) :val(n){
	}
};

int TreeDepth(Node* pRoot){
	if (pRoot == nullptr){
		return 0;
	}
	if (pRoot->left == nullptr&&pRoot->right == nullptr){
		return 1;
	}
	int leftH = TreeDepth(pRoot->left);
	int rightH = TreeDepth(pRoot->right);
	return leftH > rightH ? leftH + 1 : rightH + 1;
}
int main(){
	Node a(2);
	Node b(2);
	Node c(2);
	Node d(2);
	Node e(2);
	Node f(2);
	Node g(2);
	a.left = &b;
	a.right = &c;
	b.left = &d;
	b.right = &e;
	c.left = &f;
	d.left = &g;
	int depth=TreeDepth(&a);
	cout << depth << endl;//4
	return 0;
}