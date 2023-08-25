/*
Name: Abhishek Negi 
Student Id: 20011740
Roll no.: 5
Section H

Q2).Write a C program using functions to find the frequency Count of 
array elements. The called function should display the count on the 
output screen. Use Pointers for the implementation. 
*/
#include <stdio.h>
int main()
{
    int arr[40], freq[40];
    int n,i,j,count;
    int *ptr =arr;
    
    printf("Question 2:Abhishek Negi Section H roll no. 5\n\n");
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", (ptr + i)); 
        freq[i] = -1;
    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
            count++;
            freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
        freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
        printf("Frequency of %d is %d \n", ptr[i], freq[i]);
        }
    }
    return 0;
}
