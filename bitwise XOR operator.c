//unlike OR operator XOR operator treat 1 and 1 combination also 0
#include<stdio.h>
int main()
{
	int a = 5 ;//0000 0101
	int b = 3 ;//0000 0011
	int c ;
	
	c = a^b;//0000 0110 = 6
	printf("After XOR of %d and %d value is %d", a, b, c);
	
	return 0;
}
