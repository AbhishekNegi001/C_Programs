/*
Name: Abhishek Negi 
Section H 
Roll no.: 5 
Student id: 20011740

Q 3).Develop a program to reverse a given String.
*/
#include <stdio.h>
int main()
{
  printf("Q 3). Abhishek Negi Section H Roll no.: 5 \n\n");
  printf("enter the string\n");
  char str[1000];
  char rev[1000];
  int i, j, count = 0;
  fgets(str,sizeof(str),stdin);
  printf("\nBefore Reverse: %s", str);
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }

  printf("\nAfter Reverse: %s", rev);
}
