#include<iostream>
using namespace std;
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};
ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	ListNode* p1 = pListHead;
	ListNode* p2 = pListHead;

	for (int i = 0; i < k; i++){
		if (!p1){
			return nullptr;
		}
		p1 = p1->next;
	}
	while (p1){
		p1 = p1->next;
		p2 = p2->next;
	}
	return p2;
}

int main(){
	ListNode a = 3;
	ListNode b = 7;
	ListNode c = 2;
	ListNode d = 5;
	ListNode e = 8;
	ListNode f = 9;
	ListNode g = 6;

	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = &f;
	f.next = &g;

	ListNode* p = FindKthToTail(&a, 4);
	cout << p->val << endl;
	return 0;
}