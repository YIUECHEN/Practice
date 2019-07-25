#include<stdio.h>
#include<stdlib.h>
void swap(int *pa,int *pb){
     char tmp=*pa;
	*pa=*pb;
	*pb=tmp; 	
}
int main(){
	int a[5]={0,1,2,3,4};
	int b[5]={5,6,7,8,9};
	//int len=sizeof(a)/sizeof(b[0]);
    int i=0;
    
    for(i=0;i<5;i++){
    	swap(&a[i],&b[i]);	
	}
     for(i=0;i<5;i++){
     	printf("%d",a[i]);
	 }
	 
	 printf("\n");
	 
	for(i=0;i<5;i++){
     	printf("%d",b[i]);
	 } 
	system("pause");
	 return 0;
}