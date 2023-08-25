/*
2. Write a the C program to create an array by inserting  N 
elements in it then print all the numbers which are palindrome 
number from the array using function.
*/
#include<stdio.h>
int main()
{
	int i,j , n, temp , rev, rem ;
	printf("Enter the range of an array: \n");
	scanf ("%d", &n);
	int arr[n];
	printf("Enter the elements in the array: \n");
	for (i=0; i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++)
	{
		temp = arr[i];
		rev = 0;
		while (temp)
		{
			rem = temp % 10;
			temp= temp /10;
			rev = rev*10 + rem;
		}
		if(arr[i]==rev)
		{
			printf("\nPalindrome number: %d",arr[i]);	
		}
	}
	return 0;
}
