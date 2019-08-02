#include<stdio.h>
#include<stdlib.h>
//int fab(int n) {
//	if (n <= 2)
//		return 1;
//	else
//		return fab(n - 1) + fab(n - 2);
//}
//int main() {
//	int n;
//	printf("请输入要求第几个数字：\n");
//	scanf("%d", &n);
//	int ret = fab(n);
//	printf("ret=%d", ret);
//	return 0;
//}

int fab(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	if (n < 3)
	 return 1;
	while (n > 3) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main() {
	int n = 0;
	int ret=0;
	printf("请输入要求第几个数字：\n");
    scanf("%d", &n);
	ret = fab(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}