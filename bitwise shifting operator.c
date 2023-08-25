/*
General formula to find value after left shifting
val2 = val1<<n
val2 = val1*2^n

General formula to find value after right shifting 
val2 = val1>>n
val2 = (val1/2^n)integer value
*/
#include<stdio.h>
int main()
{
	char var = 4, var2;// binary representation: var = 3 = 0000 0011
	var2 = var<<2;//left shifting operator 
	//after left shifting 0000 11__ 
	printf("Variable %d after left shifting by 2: %d\n", var, var2);
	
	var = 4;//binary representation: var = 4 = 0000 0100
	var2 = var >> 2;//right shifting operator
	//after right shifting __00 0001
	printf("Variable %d after right shifting by 2: %d", var, var2);
}
