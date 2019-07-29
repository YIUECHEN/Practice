#include<stdio.h>
#include<stdlib.h>
int main(){
	int ch;
	int tmp;
    while((ch=getchar())!=EOF){
	if(ch>='a'&&ch<='z'){
		tmp=ch-('a'-'A');
		printf("%c\n",tmp);
	} 
	if(ch>='A'&&ch<='z'){
	    tmp=ch+('a'-'A');
		printf("%c\n",tmp);
	} 
    else{
	             ;
	}
  }
	system("pause");
	return 0; 
}