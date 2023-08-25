#include<stdio.h>
int main()
{
	char a = 4;//binary representation:a = 0000 0100
	char b = 6;// b = 0000 0110
	char c = 1;// c = 0000 0001
	if (a&b)//bitwise & operator 
		printf("Result of a&b is 1\n");
	if (a&&b)//logical && operator
		printf("Result of a&&b is 1\n");
	if (a&c)
		printf("Result of a&c is 1\n");
	if (a&&c)
		printf("Result of a && c is 1");
	
	return 0;		
}
