#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
		}
};

//vector<int> printListFromTailToHead(ListNode* head) {
//	vector<int> v;
//	stack<int> s;
//	ListNode* p = head;
//	while(p != NULL){
//		s.push(p->val);
//		p = p->next;
//	}
//	int len = s.size();
//	for (int i = 0; i < len; i++){
//		v.push_back(s.top());
//		s.pop();
//	}
//	return v;
//}
vector<int> printListFromTailToHead(ListNode* head) {
	vector<int> v;
	ListNode* p = head;
	if (p != NULL){
		v.push_back(p->val);
		while (p->next != NULL){
			v.insert(v.begin(), p->next->val);
			p = p->next;
		}
	}
	return v;
}

int main(){
	ListNode a(1);
	ListNode b(2);
	ListNode c(3);
	ListNode d(5);
	ListNode e(6);
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	vector<int> res=printListFromTailToHead(&a);
	for (auto e : res){
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}