/*
Write a C program to implement an iterative and recursive function to
compute the following series by accepting the value of N and printing
the final computed value by the function in calling program.

1^2 - 2^2 + 3^2 – 4^2 + .......N^2

Name: Abhishek Negi
Student ID: 20011740
BTech CSE section H
*/

#include<stdio.h>
int series(int n)
{
   int sum=0;
   int sign=1;
   for(int i=1;i<=n;i++)
   {
     sum=sum+(i*i)*sign;
     sign=-sign;
   }
   return sum;
}
 int series2 (int n,int sum,int sign,int i)
 {
  if(i<n)
  {
    sum=sum+(i*i)*sign;
    return series2 (n,sum,-sign,++i);
  }
  else
  return sum+(i*i)*sign;
  }
  int main()
  {
   int n;
   printf("Enter the range of series:\n");
   scanf("%d",&n);
   printf("iterative sum of series=%d",series(n));
   printf("recursive sum of series=%d",series2(n,0,1,1));
   return 0;
  }
