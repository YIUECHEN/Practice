#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> levelOrder(TreeNode* root) {
	queue<TreeNode*> nodeq;
	queue<int> levelq;
	vector<vector<int>> vv;

	if (root)
	{
		nodeq.push(root);
		levelq.push(0);
	}
	while (!nodeq.empty()){
		TreeNode* node = nodeq.front();
		nodeq.pop();
		int level = levelq.front();
		levelq.pop();

		if (level >= vv.size()){
			vv.push_back(vector<int>(0));
		}
		vv[level].push_back(node->val);

		if (node->left){
			nodeq.push(node->left);
			levelq.push(level + 1);
		}

		if (node->right){
			nodeq.push(node->right);
			levelq.push(level + 1);
		}

	}
	return vv;
}

int main(){
	TreeNode a(1);
	TreeNode b(2);
	TreeNode c(3);
	TreeNode d(4);
	TreeNode e(5);

	a.left = &b;
	a.right = &c;
	b.left = &d;
	d.right = &e;

	vector<vector<int>> ret=levelOrder(&a);
	for (int i = 0; i < ret.size(); i++){
		for (int j = 0; j < ret[i].size(); j++){
			cout << ret[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}