#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter any String : \n");
	fgets(str, 100 , stdin);
	printf("Entered String : \n%s",str);
}
