/*
Name: Abhishek Negi
Section: H
Roll no. : 5

Q 1).Develop a program using a function name SWAP to exchange two 
numbers without using a temporary variable. Accept the numbers in 
the main program and display their swapped values to the console 
in the calling program itself.

*/
#include <stdio.h>
void swap(int *x,int *y)
{
    int t;
    t   = *x;
    *x  = *y;
    *y  =  t;
}
int main()
{
    int Var1,Var2;
    printf("Abhishek Negi Section H 20011740\n");
    printf("Enter value of Var1 and Var2: ");
    scanf("%d%d",&Var1,&Var2);

    swap(&Var1,&Var2);
    printf("After  Swapping: Var1 is: %d, Var2 is: %d\n",Var1,Var2);

    return 0;
}
