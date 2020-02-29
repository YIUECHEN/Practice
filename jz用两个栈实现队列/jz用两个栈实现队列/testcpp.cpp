#include<iostream>
#include<stack>
using namespace std;
class Solution
{
public:
	void push(int node) {
		if (!stack2.empty()){
			while (!stack2.empty()){
				stack1.push(stack2.top());
				stack2.pop();
			}
		}
		stack1.push(node);
	}

	int pop() {
		int res;
		if (!stack1.empty()){
			while (!stack1.empty()){
				stack2.push(stack1.top());
				res = stack2.top();
				stack1.pop();
			}
		}
		res = stack2.top();
		stack2.pop();
		return res;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};

int main(){
	Solution s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.pop();
	s.pop();
	
	system("pause");
	return 0;
}