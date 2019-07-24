#include<stdio.h> 
#include<stdlib.h>
int main(){
	int a=10;
	int b=20;
	int tmp=0;
	printf("a=%d  b=%d\n",a,b);
	tmp=a;
	a=b;
	b=tmp;
    printf("a=%d  b=%d\n",a,b);
	system("pause");
    return 0;
} 


/*
#include<stdio.h> 
#include<stdlib.h>
int main(){
	int a=10;
	int b=20;
	printf("a=%d  b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d  b=%d\n",a,b);
	system("pause");
	return 0;	
} 
*/

/*
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=10;
	int b=20;
	printf("a=%d  b=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d  b=%d\n",a,b);
	system("pause");
	return 0;	
} */ 