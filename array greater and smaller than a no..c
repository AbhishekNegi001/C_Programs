/*
Name: Abhishek Negi
Section: H
Roll no. : 5

3.Develop a program in C to count the number of elements greater than, less than or equal to a number ‘k’ present in an array.
*/
#include<stdio.h>
int main()
{
  int Arr[50], i, n,k;
    printf("Abhishek Negi Section H student id:20011740 class rollno. 5\n\n");
    printf("\nEnter the number of elements :");
    scanf("%d", &n);
    printf("\nEnter the array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &Arr[i]);
         printf("\nEnter the number to be compared : ");
         scanf("%d", &k);

    int large=0,small=0,equal=0;

    for(int i=0;i<n;i++)
    {
        if(Arr[i]<k)
           small++;
        else if(Arr[i]>k)
           large++;
        else
           equal++;
    }
    printf("Numbers smaller than k :%d\n",small);
    printf("Numbers greater than k :%d\n",large);
    printf("Numbers equal to k :%d\n",equal);

    return 0;
}
