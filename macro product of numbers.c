#include<stdio.h>
#define product(a,b) a*b
int main(void)
{
    int a, b, prod;
    printf("Enter the two numbers:");
    scanf("%d %d", &a, &b);
    prod =product(a, b);
    printf("The product of  two numbers is: %d", prod);
}
