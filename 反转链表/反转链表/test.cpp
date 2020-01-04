#include<iostream>

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head){
	ListNode* prev = NULL;
	ListNode* cur = head;
	ListNode* nextptr = NULL;

	while (cur != NULL){
		nextptr = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nextptr;
	}
	return prev;
}
int main(){
	ListNode a(1);
	ListNode b(2);
	ListNode c(3);
	ListNode d(4);

	a.next = &b;
	b.next = &c;
	c.next = &d;
	reverseList(&a);

	ListNode* cur = &a;
	while (cur != NULL){
		cout << cur->val << " ";
		cur = cur->next;
	}
	system("pause");
	return 0;
}