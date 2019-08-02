#include<stdio.h>
#include<math.h> 
#include<stdlib.h>
void pn(int a){
	int i=2;
	while(i<=sqrt(a)){
		if(a%i==0){
			printf("这个数不是素数！");
			 break;
		}
		i++;
	}
	    if(i>sqrt(a)){
	    	printf("这个数是素数！");
		}
	}

int main(){
	int a=0;
	printf("请输入一个数："); 
	scanf("%d",&a);
	pn(a);
	system("pause");
	return 0;
}