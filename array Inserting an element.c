/*
Name: Abhishek Negi
Section: H
Roll no. : 5

6.Develop a program to insert an element into a list of elements in the Array (Hint: Use Switch case):
i.At first
ii.At last
iii.At particular position of an array.
*/
#include <stdio.h>
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;
    printf("Abhishek Negi Section H student id:20011740 class rollno. 5\n\n");
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
    printf("Original array is::\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter the value of element to be inserted:");
    scanf("%d",&x);

    printf("\n");
    n++;
    printf("Enter the position at which element is to be inserted:");
    scanf("%d",&pos);
    switch(pos)
    {
    case 0:insert_element(0,n,x,arr);
    break;
    case 1:insert_element(1,n,x,arr);
    break;
    case 2:insert_element(2,n,x,arr);
    break;
    case 3:insert_element(3,n,x,arr);
    break;
    case 4:insert_element(4,n,x,arr);
    break;
    case 5:insert_element(5,n,x,arr);
    break;
    case 6:insert_element(6,n,x,arr);
    break;
    case 7:insert_element(7,n,x,arr);
    break;
    case 8:insert_element(8,n,x,arr);
    break;
    case 9:insert_element(9,n,x,arr);
    break;
    case 10:insert_element(10,n,x,arr);
    break;
    }
    printf("Required array is:: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
int insert_element(int pos,int n,int x,int arr[])
{
    for (int i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = x;
    return arr[pos - 1];
}
