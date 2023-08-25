/*
Name: Abhishek Negi
Section: H
Roll no. : 5

Q 4).Develop a program using pointers to read an array of 
integers and prints its elements in the reverse order.
*/
#include<stdio.h>
int main() 
{
   int size, i, arr[30];
   int *ptr;
   ptr = &arr[0];
   printf("Abhishek Negi Section H 20011740\n");
   printf("\nEnter the size of array : ");
   scanf("%d", &size);
 
   printf("\nEnter %d integers into array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
   }
 
   ptr = &arr[size - 1];
 
   printf("\nElements of array in reverse order are :");
 
   for (i = size - 1; i >= 0; i--) {
      printf("\nElement%d is  : %d", i, *ptr);
      ptr--;
   }
}
