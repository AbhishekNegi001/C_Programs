/*
Name: Abhishek Negi
Section: H
Roll no. : 5

1.Develop a program in C to check whether a given number is present an array.
Example:
Suppose,  a[10] = {1,2,3,4,5,6,7,8,9,10} and
x=5, the program should print “x = 5 is present in the array at 5th position.”
x = 11, the program should print “x = 11 is not present in the array.”

*/
#include <stdio.h>
int main()
{
    int a[10], search, i, n;
    printf("Abhishek Negi Section H student id:20011740 class rollno. 5\n\n");
    printf("enter the no of elements to be in array\n");
    scanf("%d", &n);
    printf("enter the %d no elements in array\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter the no to be searched\n");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            printf("x = %d is present in the array at %dth position\n", search, i + 1);
            break;
        }
    }
    if (a[i] != search)
        printf("x = %d is not present in the array\n", search);

    return 0;
}
