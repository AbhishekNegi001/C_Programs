/*
Name: Abhishek Negi
Section: H
Roll no. : 5

Q2 b).
*/
#include<stdio.h>
int main()
{
	int i, n, num, count = 0, arr[n];
	printf("\nEnter Array size: ");
	scanf("%d",&n);
	for (i= 0; i<n; i++)
	{
		printf("\nEnter element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter number to find frequency:");
	scanf("%d",&num);
	for (i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			count++;
		}
	}
	printf("\nFrequency of the elements %d is %d", num, count);
	return 0;
}

