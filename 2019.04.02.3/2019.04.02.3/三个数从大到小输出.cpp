#include<stdio.h>
#include<stdlib.h>
void swap(int x,int y){
	int tmp=x;
	x=y;
	y=tmp;
}
void swap(int *px,int *py){
	int tmp=*px;
	*px=*py;
	*py=tmp;
}

int main(){
    int a=1;
    int b=2;
    int c=3;
    if(a<b){
    	swap(&a,&b);
	}
	if(a<c){
		swap(&a,&c);
	}
	if(b<c){
		swap(&b,&c);
	}
	printf("%d %d %d\n",a,b,c); 
	system("pause");
	return 0;
}