#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
//µÝ¹é
//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//	if (l1 == NULL)return l2;
//	else if (l2 == NULL)return l1;
//	else if (l1->val > l2->val){
//		l2->next=mergeTwoLists(l1, l2->next);
//		return l2;
//	}
//	else{
//		l1->next=mergeTwoLists(l1->next, l2);
//		return l1;
//	}
//}


//µü´ú
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode* head = new ListNode(-1);
	ListNode* prev = head;
	while (l1 != NULL&&l2 != NULL){
		if (l1->val <= l2->val){
			prev->next = l1;
			l1 = l1->next;
		}
		else{
			prev->next = l2;
			l2 = l2->next;
		}
		prev = prev->next;
	}
	prev->next = l1 != NULL ? l1 : l2;
	return head->next;
}
int main(){
	ListNode a(4);
	ListNode b(3);
	ListNode c(1);
	ListNode d(5);
	ListNode e(6);
	ListNode f(2);
	ListNode g(1);

	a.next = &b;
	b.next = &c;

	d.next = &e;
	e.next = &f;
	f.next = &g;
	ListNode* ret=mergeTwoLists(&a, &d);
	return 0;
}