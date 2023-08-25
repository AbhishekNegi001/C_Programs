/*
Name: Abhishek Negi
Section: H
Roll no. : 5

Q 5).Write a C program to sort N elements accepted into an array 
using pointers. Display the sorted array to the output screen.
*/
#include <stdio.h>
int main()
{

  
   int i, j, count, temp, number[25];
   printf("Abhishek Negi Section H 20011740\n");
   printf("How many numbers u are going to enter?: ");
   scanf("%d", &count);

   printf("Enter %d elements: ", count);
  
   for (i = 0; i < count; i++)
      scanf("%d", &number[i]);


   for (i = 1; i < count; i++)
   {
      temp = number[i];
      j = i - 1;
      while ((temp < number[j]) && (j >= 0))
      {
         number[j + 1] = number[j];
         j = j - 1;
      }
      number[j + 1] = temp;
   }

   printf("Order of Sorted elements: ");
   for (i = 0; i < count; i++)
      printf(" %d", number[i]);

   return 0;
}
