#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int n;
	string s;
	while (cin >> n>> s){
		vector<int> v;
		for (int i = 1; i <= n; i++){//��ʼ�������б�
			v.push_back(i);
		}
		int p = 0;//���λ��
		int x = 0;//��ǰҳ��ʾ�ĵ�һ�׸���
		int ws = 4;//ÿҳ��ʾ�ĸ�����
		if (n <= 4){
			ws = n;
			for (int i = 0; i<s.size(); i++){
				if (s[i] == 'U'){
					/*if (p>0){
						p--;
					}
					else if (p = 0){
						p = n - 1;
					}*/
					p == 0 ? p = n - 1 : p--;
				}

				else if (s[i] == 'D'){
					/*if (p < n - 1){
						p++;
					}
					else if (p = n - 1){
						p = 0;
					}*/
					p == n - 1 ? p = 0 : p++;
				}
			}
		}
		else{
			for (int i = 0; i < s.size(); i++){
				if (s[i] == 'U'){
					if (p == 0){
						p = n - 1;
						x = n - 4;
					}
					else{
						if (p == x){
							p--;
							x--;
						}
						else{
							p--;
						}
					}
				}
				else if (s[i] == 'D'){
					if (p == n - 1){
						p = 0;
						x = 0;
					}
					else{
						if (p == x + 3){
							p++;
							x++;
						}
						else{
							p++;
						}
					}
				}
			}
		}
			//���
		for (int i = x; i < x + ws; i++){
			
				cout << v[i] << " ";
			}
			cout << endl;
			cout << v[p] << endl;
	}
	return 0;
}