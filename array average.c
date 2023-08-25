/*
Name: Abhishek Negi
Section: H
Roll no. : 5

1.Develop a program in C to find sum and average of given N elements in an array.

*/
#include  <stdio.h>

int main()
{
    int i, n;
    float sum = 0.0, avg;
    printf("Abhishek Negi Section H student id:20011740 class rollno. 5\n");
    printf ("Enter the value of N \n");
    scanf("%d", &n);
    int array[n];

    printf("Enter %d numbers \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array elements \n");

    for (i = 0; i < n; i++)
    {
        printf("%3d\n", array[i]);
    }



    for (i = 0; i < n; i++)
    {
        sum+=array[i];
    }

    avg = sum / n;

    printf("\n Sum of all numbers =  %.2f\n", sum);

    printf("\n Average of all input numbers =  %.2f\n", avg);
 }
