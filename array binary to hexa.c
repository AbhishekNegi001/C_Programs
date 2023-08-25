/*
Name: Abhishek Negi
Section: H
Roll no. : 5

5.Develop a program in C to convert a number from base 10 to base 16 using an array.
*/
#include<stdio.h>
int main()
{
    long int dec,remainder,quotient;
    int i=1,j,temp;
    char hexa[100];
    printf("Abhishek Negi Section H student id:20011740 class rollno. 5\n\n");
    printf("Enter decimal number:");
    scanf("%ld",&dec);
    quotient=dec;
    while(quotient!=0)
    {
        temp=quotient%16;
        if(temp<10)
            temp+=48;
        else
            temp+=55;
        hexa[i++]=temp;
        quotient/=16;
    }
    printf("Hexadecimal equivalent of given decimal number %ld is:",dec);
    for(j=i-1;j>0;j--)
        printf("%c",hexa[j]);
    return 0;
}
