#include <stdio.h>
#define num 1000
int main(void)
{
	int i;
	printf("Enter 1 for showing the value of macro and \
	\n2 for undefining thr value of macro:");
	scanf("%d", &i);
	if (i == 1)
	{
		printf ("The value of number is %d", num);
	}
	else 
	{
		#undef num
		int num = 999;
		printf("The value of integer after undefining macro: %d",num);
	}
}
