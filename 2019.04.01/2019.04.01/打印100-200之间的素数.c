#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
int main()
{
	int i=101;      
	while(i<=200){
		int j=2;
		while(j<=sqrt(i)){
			if(i%j==0){
			break;
		   }
		   j++;
	     }
	     	if(j>sqrt(i)){
	     		printf("%d\n",i);
			 }
			 i+=2;
		 }
	system("pause");
	return 0;
 } 