#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char reverse_string(char const * string){
    assert( string != NULL );    
	if( *string != '\0' ){        
	string++;        
	reverse_string( string );        
	printf("%c",*(string-1)); 
	return 0;
	}    
}

int main(){
    char *string="abcdefg";
    printf("ԭ�ַ���Ϊ:%s\n",string);        
	printf("�������к�Ϊ:%s\n",reverse_string( string )); 
	system("pause");
	return 0;
}