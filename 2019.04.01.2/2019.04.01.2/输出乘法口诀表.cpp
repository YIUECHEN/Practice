#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
int main()
{
	int i=0;
	int j=0;
	for(i=1;i<=9;i++){
	    for(j=1;j<=i;j++){
			printf("%d*%d=%-2d  ",j,i,i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}