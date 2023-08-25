#include<stdio.h>
int main()
{
	int i ;
	char str[100];
	char *ptr;
	ptr = str;
	printf("Enter line of text : \n");
	while((i = getchar()) != '\n')
	{
		*ptr = i;
		ptr++;
	}
	*ptr = '\0';
	printf("%s",str);
	return 0;
}
