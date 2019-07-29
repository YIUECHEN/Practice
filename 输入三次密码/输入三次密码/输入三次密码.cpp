#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr1[]="123456";
	char arr2[10]={0};
	int i=0;
    for(i=0;i<3;++i){
		printf("ÇëÊäÈëÃÜÂë£º");
		scanf("%s",arr2);
		if(strcmp(arr2,arr1)==0)
		{
			printf("µÇÂ½³É¹¦£¡\n");
	        break;	
		}
		else
		{ 
		printf("ÃÜÂë´íÎó£¡\n"); 
		 } 
	}
    if(i==3)
	{
	  printf("Èý´ÎÃÜÂë´íÎó£¬ÍË³ö³ÌÐò.\n");	 
  }
	system("pause");
    return 0;
}