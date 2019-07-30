#include<stdio.h>
#include<stdlib.h>
void mul(int a){
	int p=0;
    int i=0;	    
	int j=0;
	for(i=1;i<=a;i++){
	    for(j=1;j<=i;j++){
			p=i*j;
			printf("%d*%d=%-2d   ",i,j,p);
   }
   	printf("\n");
  }
}
int main(){
	int a=0;
	printf("ÊäÈëÐÐÊý£º");
	scanf("%d",&a);
	mul(a);
	system("pause");
	return 0;

	}

