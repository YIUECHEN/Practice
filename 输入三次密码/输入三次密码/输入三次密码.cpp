#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr1[]="123456";
	char arr2[10]={0};
	int i=0;
    for(i=0;i<3;++i){
		printf("���������룺");
		scanf("%s",arr2);
		if(strcmp(arr2,arr1)==0)
		{
			printf("��½�ɹ���\n");
	        break;	
		}
		else
		{ 
		printf("�������\n"); 
		 } 
	}
    if(i==3)
	{
	  printf("������������˳�����.\n");	 
  }
	system("pause");
    return 0;
}