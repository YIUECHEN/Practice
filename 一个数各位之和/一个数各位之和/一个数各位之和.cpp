#include<stdio.h>
#include<stdlib.h>
int DigitSum(int num) {
	if(num>0){
		return num % 10 + DigitSum(num/10);
	}
	return 0;
}
int main() {
	int num = 0;
	printf("请输入一个数：");
	scanf_s("%d\n", &num);
	printf("%d\n",DigitSum(num));
	system("pause");
	return 0;
}