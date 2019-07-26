#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=1;
	int j=1;
	for(i=1;i<=26;i+=2){
		if(i<=13){
			for(j=1;j<=i;j++){
				printf("*");	 
			}
			printf("\n");
		}
		if(i>13){
			for(j=i;j<26;j++){
				printf("*"); 
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}