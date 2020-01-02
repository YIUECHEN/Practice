#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
void deleteNode(ListNode* node) {
	node->val = node->next->val;
	node->next = node->next->next;
}

int main(){
	ListNode a(3);
	ListNode b(1);
	ListNode c(4);
	ListNode d(6);
	
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = NULL;

	deleteNode(&b);

	ListNode* node = &a;
	while (node!=NULL){
		cout << node->val << "";
		node = node->next;
	}

	system("pause");
	return 0;
}
