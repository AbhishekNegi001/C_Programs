/*
Name: Abhishek Negi
Section: H
Roll no. : 5

3.Develop a program in C add two polynomials.
Example:
Suppose two polynomials are P(x) and Q(x)
P(x) = 4(x^6) + 3(x^5) + 4(x^4) -4(x^3) + 3(x^2) + x + 1
(Use some array to store coefficients of P(x) in memory)
Q(x) = 6(x^5) + 3(x^4) + 9(x^2) + 21x + 28
(Use a second array to store coefficients of Q(x) in memory)
R(x) = P(x) + Q(x) = 4(x^6) + 9(x^5) + 7(x^4) -4(x^3) + 12(x^2) + 22x +29
(Use some array to store coefficients of P(x) in memory)

Finally print the polynomial R(x) as “4	9	   7	  -4	   12	  22	 29”

*/
#include <stdio.h>
#include <math.h>
int main()
{
  int a[20]={0}, b[20]={0}, c[20]={0}, i, x, m,n,p;
  printf("Abhishek Negi Section H student id:20011740 class rollno. 5\n\n");
  printf("enter the degree of 1st polynomial\n");
  scanf("%d", &m);

  printf("enter the coefficients of x raise to the power for 1st polynomial\n ");
  for (i = 0; i <= m; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("enter the degree of 2nd polynomial\n");
  scanf("%d", &n);

  printf("enter the coefficients of x raise to the power for 2nd polynomial\n ");
  for (i = 0; i <= n; i++)
  {
    scanf("%d", &b[i]);
  }

  if(m>n)
  p=m;
  else
  p=n;

  for (i = 0; i <=p; i++)
  {
    c[i] = a[i] + b[i];
  }
    printf("\nCoefficients of final polymers are: ");
  for(i = 0; i<=p; i++)
  {
      printf("%d      ",c[i]);
  }
  return 0;
}
