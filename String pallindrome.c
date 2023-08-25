/*
Name: Abhishek Negi 
Section H 
Roll no.: 5 
Student id: 20011740

Q 4).Develop a program to check whether given string is palindrome or not.
*/
#include <stdio.h>
#include <string.h>

int main()
{
	printf("Q 4). Abhishek Negi Section H Roll no.: 5 \n\n");
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++)
	{
        if(string1[i] != string1[length-i-1])
		{
            flag = 1;
            break;
   		}
	}
    
    if (flag) 
	{
        printf("%s is not a palindrome", string1);
    }    
    else 
	{
        printf("%s is a palindrome", string1);
    }
    return 0;
}
