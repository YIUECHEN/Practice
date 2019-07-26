#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int S(int num,int N){
	int sum=0;
	int n=num;
	while(n>0){
		int a=n%10;
		sum+=pow(a,N);
		n=n/10;
	}
		if(sum==num){
		return num;
		}
		else{
			return 0;
		}
}
int main(){
	int num=0;
	for(num=100;num<=999;num++){
		int ret=S(num,3);
		if(ret!=0){
		printf("%d ",ret);
		}
	}
	system("pause");
	return 0;
}