/*
   1
  232
 34545
4567654
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf(" ");
        }
        int k=i;
        for(int j=1;j<=i*2-1;j++)
        {
            printf("%d",k);
            if(j<(i*2-1)/2 + 1)
                k++;
            else
                k--;
        }
        printf("\n");

    }
    return 0;
}
