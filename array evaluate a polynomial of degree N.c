/*
Name: Abhishek Negi
Section: H
Roll no. : 5

2.Develop a program in C to evaluate a polynomial of degree N.
Example:
Suppose P(x) is a polynomial and P(x) = 5(x^6)+6(x^5)+3(x^4)-4(x^3)+(x^2)+2x+1
Now store the coefficients of the polynomial in an array by help of following statement,
int a[7]={1,2,1,-4,3,6,5}; such that a[0] = 1 is coefficient of x0,  a[1]=2 is coefficient of x1, and so on.
By direct method or applying Honer’s rule evaluate the polynomial at x =p.

P(x=3) = 5254, Therefore your program should print
“The value of the polynomial P(x=3) is 5254.
*/
#include<stdio.h>
#include <math.h>

int main()
{
int a[20],i,x,solution=0,n;
printf("Abhishek Negi Section H student id:20011740 class rollno. 5\n\n");
printf("enter the degree of polynomial\n");
scanf("%d",&n);

printf("enter the coefficients of x raise to the power\n ");
for(i=0;i<=n;i++)
{
  scanf("%d",&a[i]);
}
printf("enter the value of x\n");
scanf("%d",&x);
for(i=0;i<=n;i++)
{
solution=solution+a[i]*pow(x,i);
}
printf("the value of the polynomial p(x=%d)=%d",x,solution);
  return 0;
}
