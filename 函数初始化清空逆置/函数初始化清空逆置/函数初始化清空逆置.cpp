#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void init(int arr[],int sz){
	int i;
	for(i=0;i<sz;i++){
		arr[i]=0;
	}
}
void empty(int arr[],int sz){
	memset(arr[0],sizeof(arr[0])*sz);

}
void reverse(int arr[],int sz){
	int left=0;
	int right=sz-1;
	while(left<right){
		int tmp;
		tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;
	}
}
int main(){
	int arr[5]={0,1,2,3,4};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	init(arr,sz);
	for(i=0;i<sz;i++){
     	printf("%d",arr[i]);
	} 
	printf("\n");
	for(i=0;i<sz;i++){
		arr[i]=i+1;
		printf("%d",arr[i]);
	}
	printf("\n");
	empty(arr,sz);
    for(i=0;i<sz;i++){
     	printf("%d",arr[i]);
	} 
	printf("\n");
	for(i=0;i<sz;i++){
		arr[i]=i+1;
		printf("%d",arr[i]);
	}
	printf("\n");
	reverse(arr,sz);
    for(i=0;i<sz;i++){
     	printf("%d",arr[i]);
	} 
	system("pause");
	return 0;
}