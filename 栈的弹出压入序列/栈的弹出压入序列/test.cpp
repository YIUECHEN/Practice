//class Solution {
//public:
//	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
//		//��ջ�ͳ�ջ��Ԫ�ظ���������ͬ
//		if (pushV.size() != popV.size())
//			return false;
//		// ��s��ģ����ջ���ջ�Ĺ���
//		int outIdx = 0;
//		int inIdx = 0;
//		stack<int> s;
//		while (outIdx < popV.size())
//		{
//			// ���s�ǿգ�����ջ��Ԫ�����ջ��Ԫ�ز���ȣ�����ջ
//			while (s.empty() || s.top() != popV[outIdx])
//			{
//				if (inIdx < pushV.size())
//					s.push(pushV[inIdx++]);
//				else
//					return false;
//			}
//			// ջ��Ԫ�����ջ��Ԫ����ȣ���ջ
//			s.pop();
//			outIdx++;
//		}
//		return true;
//	}
//};

class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		stack<int> s;
		size_t pushi = 0, popi = 0;
		while (pushi < pushv.size()){
			s.push(pushV[pushi]);
			while (!s.empty() && s.top = popv(popi)){
				s.pop();
				popi++;

			}
			pushi++;

		}
	}

};
