/*
Name: Abhishek Negi
Section: H
Roll no. : 5

Q 2).	Demonstrate a program to access variables through 
pointers and show pointer arithmetic on int and char data types. 
*/
#include<stdio.h>

int main()
{
    printf("Abhishek Negi Section H 20011740\n");
    int i = 12, *ip = &i;
    printf("Pointer arithmetics using int and char"); 
    char ch = 'a', *cp = &ch;
    printf("\nValue of ip = %u\n", ip);

    printf("Value of cp = %u\n\n", cp);

    printf("Value of ip + 1 = %u\n", ip + 1);

    printf("Value of cp + 1 = %u\n\n", cp + 1);

    printf("Value of ip - 2 = %u\n", ip - 2);

    printf("Value of cp - 2 = %u\n", cp - 2);

    return 0;
}
