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
    printf("原字符串为:%s\n",string);        
	printf("反向排列后为:%s\n",reverse_string( string )); 
	system("pause");
	return 0;
}