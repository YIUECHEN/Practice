
#include<iostream> 
using namespace std;
/*
int& Add(int a, int b) {    
	int c = a + b;
	return c;
}
 
int main() {
	int& ret = Add(1, 2);
	Add(3, 4);    
	cout << "Add(1, 2) is :"<< ret <<endl;
	system("pause");
	return 0; 
}
 
int main() {
  int a = 10;
  int& ra = a;
  ra = 20;
  int* pa = &a;
  *pa = 20;
  return 0; 
}   

#include "C++.h" 
void f(int i) {
cout << i << endl; 
}
 int main() {    
	 f(10);    
	 return 0;
 }
 
 
// main.cpp #include "F.h" int main() {    f(10);    return 0; }
 */


/*int TestAuto(){   
	return 10; 
}
 
int main() {
	int a = 10;
	auto b = a;
	auto c = 'a';
	auto d = TestAuto();
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
	system("pause");
}
 //auto e; �޷�ͨ�����룬ʹ��auto�������ʱ���������г�ʼ��   return 0; 

*/





/* 
int TestAuto() {
	return 10;
}
 
int main() {
	int a = 10;
	auto b = a;
	auto c = 'a';
	auto d = TestAuto();
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
 
      //auto e; �޷�ͨ�����룬ʹ��auto�������ʱ���������г�ʼ��   return 0; 
}
*/

void TestAuto(){
	auto a = 1, b = 2;     
	auto c = 3, d = 4.0;  // ���д�������ʧ�ܣ���Ϊc��d�ĳ�ʼ�����ʽ���Ͳ�ͬ 
}

int main() {
	int x = 10;
	auto a = &x;
	auto* b = &x;
	auto& c = x;
 
    cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl; 
	
    system("pause");
    return 0;
}











     

     
