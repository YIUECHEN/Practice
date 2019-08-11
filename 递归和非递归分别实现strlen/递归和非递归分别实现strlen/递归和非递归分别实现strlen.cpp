#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
/*int my_strlen(char *string)
{
	int count = 0;
	if (*string != '\0')
	{
		string++;
		count = 1 + my_strlen(string);
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n",my_strlen(str));
	return 0;
} */

int my_strlen(char *string)
{
	int count = 0;
	while(*string++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n",my_strlen(str));
	system("pause");
	return 0;
}