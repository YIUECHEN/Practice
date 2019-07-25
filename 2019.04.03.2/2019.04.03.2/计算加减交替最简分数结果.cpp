#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i=0;
	double sum=0.0;
	for(i=0;i<=100;i++){
		if(i%2==1){
			sum+=1.0/i;
		}
		else if(i%2==0){
			sum-=1.0/i;
		}
	}
	printf("%lf",sum);
	system("payse");
	return 0;
}

#if 0
int main(){
	int i=0;
	double sum=0.0;
	for(i=1;i<=100;i++){
		sum+=pow(-1,i+1)/i;
	}
	printf("%lf",sum);
	system("payse");
	return 0;
}
#endif