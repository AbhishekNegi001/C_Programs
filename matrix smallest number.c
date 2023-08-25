/*
Name: Abhishek Negi 
Student Id: 20011740
Roll no.: 5
Section H

Q3).Develop a program to find the smallest element of a given 
matrix of order M x N accepted from the user.
*/
#include<stdio.h>
int main()
{
 int i,j,m,n;
 int a[10][10], smol;
 printf("Question 3:Abhishek Negi Section H Roll no.: 5\n\n");
 printf("Input row and column size:\n");
 scanf("%d%d", &m, &n);
 printf("Enter the elements:\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j< n;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%d", &a[i][j]);
  }
}
 smol = a[0][0];
 for(i=0;i< m;i++){
  for(j=0;j< n;j++){
   if(a[i][j]< smol){
    smol = a[i][j];
   }
  }
}
 printf("\n%d is the smallest element of the matrix.", smol);
}
