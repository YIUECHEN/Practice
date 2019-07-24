#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=24;
    int b=32;
    int c=0;
    while(c=a%b){
    	a=b;
    	b=c;
	}
	printf("b=%d\n",b);
	system("pause");
	return 0;
}