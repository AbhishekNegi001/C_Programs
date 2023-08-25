#include<stdio.h>
#define product(a,b) (a)*(b)    //macro function for product of a and b
#define concatenate(a,b) a##b  //macro fuction for concatinating two elements (string/integer)
#define num 300               //macro function to define the value of a number
#define string1(a) #a        //macro function to define the given element is string 
/*
# macro functions takes process and return the valude irrespective of data type 
# macro function unlike normal function is preprocessed before final compilation
# in macro function every element should be seperated carefully with brackets or else it can give wrong output
*/
int main()
{
	int i, a, b;
	while (1)
	{
		printf("\nEnter 1 for product of two numbers\n\
Enter 2 for concatinating two elements\n\
Enter 3 for printing a defined variable\n\
Enter 4 for declaring an element to string \n\
Enter 5 to exit\n");
		scanf("%d",&i);
		if (i == 1)
		{
			printf("Enter the two numbers:\n");
			scanf("%d %d", &a ,&b);
			printf("The product of two numbers is: %d",product(a,b));
		}
		else if (i == 2)
		{
			printf("Two numbers 10 and 15 after concatination are: %d",concatenate(10, 15));
		}
		else if (i == 3)
		{
			printf("The defined number's value is: %d", num);
		}
		else if (i == 4)
		{
			printf("The elements is converted into string : %s", string1(converted to string 123 ));
		}
		else if (i == 5)
		{
			break;
		}
	}
}
