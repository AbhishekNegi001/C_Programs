/*1. Write a the C program to create an array by inserting N 
elements in it then find third repeating element from the array. */
#include<stdio.h>
int main()
{
	int i, j, n , count1 = 0 , count2 = 0;
	printf("Enter the range of the array: \n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the Elements in the given array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count1 = 0;
		for(j=0;j<n;j++)
		{
			if(arr[i]!= -1)
			{
				if(arr[i]==arr[j])
				{
					count1+=1;
					if(count1>1)
					{
						arr[j]= -1;
					}
				}
			}
		}
		if(count1>1)
		{
			count2+=1;
		}
		if(count2 == 3)
		{
			printf("Third repeating element in the array is : %d",arr[i]);
			break;
		}
	}
	if(count2<3)
	{
		printf("Third repeating element in the array not found");
	}
	return 0;
}
