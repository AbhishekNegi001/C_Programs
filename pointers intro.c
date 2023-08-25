#include<stdio.h>
int main()
{
	short int n = 50;
	char ch = 'C';
	
// Printing the content of variable

	printf("Content of 'n' is %hi\n",n);
	printf("Content of 'ch' is %c\n\n",ch);

// Printing the Address of the variable

	printf("Address of 'n' is %p\n",(void*)&n);
	printf("Address of 'ch' is %p\n\n",(void*)&ch);	
	
	printf("Address of 'n' is %p\n",&n);
	printf("Address of 'ch' is %p\n",&ch);	
	
}
