#include<stdio.h>
int main()
{
	char a = 0xfb;
	int b = 0xfb;
	printf("a = %d", a);
    printf("\nb = %d\n", b);
	if (a == b)
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}
}
