/*
Name: Abhishek Negi
Section: H
Roll no. : 5

Q2 c).
*/
#include<stdio.h>
int main()
{
	int i, j, key, n, arr[n];
	printf("Enter array size:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("\nEnter elements %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=1; i<n; i++)
	{
		key = arr[i];
		j=i-1;
		while(key<arr[j]&&j>=0)
		{
			arr[j+1]=arr[j];
			--j;
		}
		arr[j+1]= key;
	}
	printf("\nThe updated array is:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
}
