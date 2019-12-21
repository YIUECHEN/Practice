#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* front = head;
	ListNode* rear = head;
	if (head->next == NULL) return NULL;
	while (n-- >= 0){
		if (rear == NULL) return head->next;
		rear = rear->next;
		// n --;
	}
	while (rear){
		rear = rear->next;
		front = front->next;
	}
	front->next = front->next->next;
	return head;
}

int main(){
	return 0;
}
