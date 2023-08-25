/*
Write a C program to implement an iterative and recursive function
GCD that accepts two numbers and returns the gcd (Greatest Common
Divisor) of two numbers accepted in the main program.

Name: Abhishek Negi
Student ID: 20011740
BTech CSE section H
*/
#include<stdio.h>
int gcd_iter(int a,int b){
    while (a!=b){
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}
int gcd_recur(int a,int b){
    if(a==0)
        return b;
    else if(b==0 ||a==b)
        return a;
    else
        if(a>b)
            return gcd_recur(a-b,b);
        else
            return gcd_recur(a,b-a);
}
int main(){
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("\nUsing iteration\n\t");
    printf("GCD of %d & %d is %d",a,b,gcd_iter(a,b));
    printf("\nUsing recursion\n\t");
    printf("GCD of %d & %d is %d",a,b,gcd_recur(a,b));
    printf("\n");
    return 0;
}
