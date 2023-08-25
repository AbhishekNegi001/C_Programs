/*
Name: Abhishek Negi
Section: H
Roll no. : 5

4.Develop a program in C to insert the elements of two equal and unequal size arrays into third array.
*/
#include <stdio.h>
   print(int *a,int n)
 {
    int i;
    for(i=0; i<n; i++)
    {
            printf("%d  ",a[i]);
    }

 }
int main()
{
    int a[100],b[100],c[200],i,n1,n2 ;
    printf("Abhishek Negi Section H student id:20011740 class rollno. 5\n\n");
    printf("Enter size of the 1st array : ");
    scanf("%d", &n1);
    printf("Enter elements in array : ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of the 2nd array : ");
    scanf("%d",&n2);

    printf("Enter elements in array : ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<n1+n2; i++)
    {
       if(i<n1)
          c[i]=a[i];
          else
            c[i]=b[i-n1];
    }
    printf(" 1st array :\n");
    print(a,n1);
    printf("\n2nd array :\n");
    print(b,n2);
    printf("\n3rd array :\n");
    print(c,n1+n2);
    return 0;
}
