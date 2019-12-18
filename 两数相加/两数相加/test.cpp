#include<iostream>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* head = new ListNode(-1);
	ListNode* h = head;
	int sum = 0;
	bool carry = false;
	while (l1 != NULL || l2 != NULL){
		sum = 0;
		if (l1 != NULL){
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2 != NULL){
			sum += l2->val;
			l2 = l2->next;
		}
		if (carry){
			sum++;
		}
		h->next = new ListNode(sum % 10);
		h = h->next;
		carry = sum >= 10 ? true : false;
	}
	if (carry){
		h->next = new ListNode(1);
	}
	return head->next;
}


int main(){
	
	ListNode a=ListNode(2);
	ListNode b=ListNode(4);
	ListNode c=ListNode(3);
	a.next = &b;
	b.next = &c;

	
	ListNode d = ListNode(5);
	ListNode e = ListNode(6);
	ListNode f = ListNode(4);
	d.next = &e;
	e.next = &f;
	ListNode* p = addTwoNumbers(&a, &d);
	system("pause");
	return 0;
}