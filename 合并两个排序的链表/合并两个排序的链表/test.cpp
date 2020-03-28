#include<iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
}; 

ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
	if (pHead1 == NULL)
		return pHead2;
	else if (pHead2 == NULL)
		return pHead1;
	else{

		ListNode* Node = nullptr;
		if (pHead1->val > pHead2->val){
			Node = pHead2;
			Node->next = Merge(pHead1, pHead2->next);
		}
		else{
			Node = pHead1;
			Node->next = Merge(pHead1->next, pHead2);
		}

		return Node;
	}
}

int main(){
	ListNode a(1);
	ListNode b(2);
	ListNode c(3);
	ListNode d(4);
	ListNode e(5);
	ListNode f(6);
	ListNode g(7);
	ListNode h(8);

	a.next = &c;
	c.next = &e;
	e.next = &g;

	b.next = &d;
	d.next = &f;
	f.next = &h;

	ListNode* node=Merge(&a, &b);
	while (node){
		cout << node->val << " ";
		node = node->next;
	}
	return 0;
}