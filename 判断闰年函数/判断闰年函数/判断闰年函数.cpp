#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void leap_year(int i){
	if((i%4==0&&100!=0)||(i%400==0)){
		printf("�����꣡"); 
	}
	else{
		printf("�������꣡"); 
	} 
}
int main(){
    int i=0;
    printf("������һ����ݣ�"); 
	scanf("%d",&i);
	leap_year(i);
	system("pause");
	return 0; 
} 