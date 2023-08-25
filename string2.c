#include<stdio.h>
int main()
{
	char str[10];
	int i, arr[3];
	
	printf("Enter a word in string :\n");
	scanf("%s",str);
	printf("Enter 3 elements in an array :\n");
	for (i=0; i<3; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Given String : %s\n",str);
	printf("Given array :\n");
	for (i=0; i<3; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
