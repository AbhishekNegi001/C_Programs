#include<stdio.h>
int fibo_recur(int n)

int fibo_ilter(int n)

int main()
{
    int n;
    printf("Enter the number you want in fibonnaci series:\n");
    scanf("%d",&n);
    printf("The %dth Fibonacci number is %d(Using Recursion)",n,fibo_recur(int n));
    printf("\nThe %dth Fibonacci number is %d(Using Iteration)",n,fibo_recur(int n));
}
