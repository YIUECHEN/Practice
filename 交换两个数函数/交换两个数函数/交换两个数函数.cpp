#include<stdio.h>
#include<stdlib.h>
/*void swap(int i,int j){
	int tmp;
	tmp=i;
	i=j;
	j=tmp;
}*/

void swap(int *i,int *j){
	int tmp;
	tmp=*i;
	*i=*j;
	*j=tmp;
}
int main(){
	int i=10;
	int j=20;
	swap(&i,&j);
	printf("i=%d  j=%d",i,j);
	system("pause");
	return 0;
}