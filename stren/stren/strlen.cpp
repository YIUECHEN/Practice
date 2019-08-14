#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;
#if 0
int main()
{
  char ab[]="hello\0world";
  char ac[15]={0};
  double **a[3][4];
  strcpy(ac,ab);
  printf("%d\n",strlen(ac));//5 遇到了\0
  printf("%d\n",sizeof(ab));//12
  printf("%d\n",sizeof(**a));//4
  printf("%d\n",sizeof(a));//48
  system("pause");
  return 0;
}
#endif
int main()
{
	int a=5;
	printf("%d\n",a++);//5
	printf("%d\n",a);//6
	if(a=0)//不是==，会改变a的值
	{
	 printf("%d",a-10);
	}
	else
	{
	printf("%d",a++);//0
	}
	system("pause");
	return 0;
}