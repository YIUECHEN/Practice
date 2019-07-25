#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=0;
	int count=0;
	for(i=1;i<=100;i++){
		if(i%10==9){
			count++;
			printf("%d  ",i);
		}
		if(i/9==0){
			count++;
		}
	}
	printf("\n");
	printf("%d",count);
	system("pause");
	return 0;
}