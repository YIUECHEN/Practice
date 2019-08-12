#define_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int print(int n)
{
    if (n>9)
    {
        print(n/10);
    }
    printf("%d ", n%10);
	return 0;
}

int main()
{
	int n=0;
	scanf("%d\n",&n);
    print(n);
	system("pause");
    return 0;
}
