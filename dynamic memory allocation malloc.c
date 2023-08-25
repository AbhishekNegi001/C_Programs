#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int i,n,n2;
	printf("Enter the number of integers to enter:\n");
	scanf("%d",&n);
	ptr = (int *)malloc(n*sizeof(int));//with malloc
	if (ptr == NULL)
	{
		exit(1);
	}
	//ptr = (int *)calloc(n,sizeof(int));//with calloc
	if (ptr == NULL)
	{
		exit(1);
	}
	printf("Enter the integers: \n");
	for(i=0 ; i<n; i++)
	{
		scanf("%d",ptr+i);
	}
	printf("Given integers are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",ptr[i]);
	}
	printf("\nEnter the number of integers you want to add in array:\n");
	scanf("%d",&n2);
	printf("Enter the integers: \n");
	(int *)realloc(ptr,(n+n2)*sizeof(int));
	if (ptr == NULL)
	{
		exit(1);
	}
	for(i = n;i<n+n2;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Modifies array :\n");
	for (i = 0;i<n+n2;i++)
	{
		printf("%d  ",*(ptr+i));
	}
	free(ptr);
	return 0;
}
