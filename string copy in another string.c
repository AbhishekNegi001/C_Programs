/*
Name: Abhishek Negi 
Section H 
Roll no.: 5 
Student id: 20011740

Q 1).Develop a program to copy a string to another without using strcpy function.
*/
#include <stdio.h>
int main() 
{
    printf("Q 1). Abhishek Negi Section H Roll no.: 5 \n\n");
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i)
	{
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}
