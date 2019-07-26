#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0;
    int j=0;
    int sum=0;
    int num=0;
    scanf("%d",&i);
    if(i>0&&i<10){
    	for(j=1;j<=5;j++){
        num=num*10+i;
        sum+=num;
    }
}
    printf("sum=%d\n",sum);
	system("pause");
    return 0;
}