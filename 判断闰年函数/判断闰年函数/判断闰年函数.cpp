#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void leap_year(int i){
	if((i%4==0&&100!=0)||(i%400==0)){
		printf("是闰年！"); 
	}
	else{
		printf("不是闰年！"); 
	} 
}
int main(){
    int i=0;
    printf("请输入一个年份："); 
	scanf("%d",&i);
	leap_year(i);
	system("pause");
	return 0; 
} 