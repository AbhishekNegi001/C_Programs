/*
Name: Abhishek Negi 
Student Id: 20011740
Roll no.: 5
Section H

Q1).Write a C Program to Swap Numbers in Cyclic Order Using Call by Reference.
*/
#include<stdio.h>  
void fun(int *a,int *b,int *c)
{  
    int temp;
    temp= *b;
    *b= *a; 
    *a= *c;
    *c= temp;
}
   
int main() 
{    
    int a,b,c;
    printf("Question 2:Abhishek Negi Section H Roll no.: 5\n\n");
    printf("Enter a,b and c respectively: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Value before Swapping:\na =%d\nb =%d\nc =%d\n",a,b,c);    
    fun(&a,&b,&c);
    printf("Value after Swapping:\na =%d\nb =%d\nc =%d\n",a,b,c);
    return 0;  
}
