#include<stdio.h>
#include<math.h> 
#include<stdlib.h>
void pn(int a){
	int i=2;
	while(i<=sqrt(a)){
		if(a%i==0){
			printf("���������������");
			 break;
		}
		i++;
	}
	    if(i>sqrt(a)){
	    	printf("�������������");
		}
	}

int main(){
	int a=0;
	printf("������һ������"); 
	scanf("%d",&a);
	pn(a);
	system("pause");
	return 0;
}