/*
Name: Abhishek Negi 
Section H 
Roll no.: 5 
Student id: 20011740

Q 2).Develop a program to Concatenate Two Strings and display 
the concatenated string to the output screen.
*/
#include <stdio.h>
int main()
{
  char s1[1000], s2[1000];

  printf("Q 2). Abhishek Negi Section H Roll no.: 5 \n\n");

  printf("Enter the first string\n");
  gets(s1);

  printf("Enter the second string\n");
  gets(s2);

   int length, j;

 
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  for (j = 0; s2[j] != '\0'; ++j, ++length) 
  {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}
