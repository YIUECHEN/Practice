#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10}; 
    int max=arr[0];
    int i=0;
    for(i=1;i<10;i++){
    	if(arr[i]>max){
    		max=arr[i]; 
		}
	}
	printf("max=%d\n",max);
	system("pause");
	return 0;
}