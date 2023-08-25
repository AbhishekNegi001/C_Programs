/*
there are some standard macros which can be used to print 
->program file (__FILE__)
->date of compilation (__DATE__)
->Time of compilation (__TIME__)
->Line number in C (__LINE__)
*/
#include <stdio.h>
int main()
{
	printf("Program file location: %s", __FILE__);
	printf("\nDate of compilation: %s", __DATE__);
	printf("\nTime of compilation: %s", __TIME__);
	printf("\nLine number in C: %d", __LINE__);
}
