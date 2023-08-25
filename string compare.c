//Q1).
#include <stdio.h>
int compare (char[],char[]);
int main() 
{
	char str1[20];
	char str2[20];
	printf("Abhishek Negi 20011740 H\n"); 
	printf("Enter the first string : ");
	scanf("%s", str1);
	printf("Enter the second string : ");	
	scanf("%s", str2); 
	int c= compare (str1, str2);
	if (c==0)
		printf("strings are same"); 
	else	
		printf("strings are not same");
	return 0;
} 

int compare(char a[],char b[]) 
{
	int f =0,i=0;
	while(a[i] != '\0' &&b[i]!='\0')
	{
		if(a[i]!=b[i])
		{
			f=1;
			break;
		}
		i++;
	}
	if(f==0)
		return 0;
	else
		return 1;
}
