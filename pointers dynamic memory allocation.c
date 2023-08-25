/*
Name: Abhishek Negi 
Student Id: 20011740
Roll no.: 5
Section H

wrong output 
Q5).Write a C Program to find second largest number using Dynamic Memory Allocation.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,*ptr,first,second;
	printf("Quetion 5:Abhishek Negi Section H Roll no.: 5 \n\n");
	printf("Number of elements: \n");
	scanf("%d", &n);
	ptr = (int *)calloc(n, sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory not allocated.");
		exit(0);
	}
    printf("Enter the elements \n");
    for (i = 0; i < n; ++i)
	{
    	scanf("%d", ptr + i);
    }
    first=second=*ptr;
    for (i = 0; i < n; ++i)
	{
    	if (ptr[i] > first)
		{
    		second=first;
    	    first=ptr[i];
    	}
    	else if(ptr[i+1]> second && ptr[i+1] < first)
    	{
        	second = ptr[i+1];
    	}
    }
    printf("Second Largest number = %d", second);
    free(ptr);
    return 0;
}
