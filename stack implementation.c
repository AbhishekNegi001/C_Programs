#include<stdio.h>
#define MAX 50
int push(int *stack , int *top);
int pop(int* stack , int * top);
int display(int *stack , int *top);
int main()
{
	int stack[],end=-1,choice;
	while (1)
	{
		printf("\nStack Operations:\n");
		printf("1. Push \n2. Pop \n3. Display \n4. Exit \n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
			{
				push(stack,&end);
				break;
			}
			case 2:
			{
				pop(stack,&end);
				break;
			}
			case 3:
			{
				display(stack,&end);
				break;
			}
			case 4:
			{
				printf("Exiting...\n");
				break;
			}
			default:
			{
				printf("Wrong choice\n");
			}
		}
	}
	return 0;
}
int push(int *stack , int *top)
{
	if(*top>50)
	{
		printf("Stack overflow\n");
	}
	else
	{
	printf("Enter the Element in the Stack:\n");
	scanf("%d",)
	}
}
