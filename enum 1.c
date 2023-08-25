#include<stdio.h>

enum list{ ramesh=31 , suresh, dinesh=32, mukesh = 13,  abcesh 
}emp;

int main()
{
	emp = ramesh;
	printf("%d %d %d %d %d",emp , suresh , dinesh, mukesh , abcesh);
	return 0;
}
