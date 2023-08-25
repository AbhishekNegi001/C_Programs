/*
Name: Abhishek Negi
Section: H
Roll no. : 5

Q 6).Write a C program to accept & store N real numbers into 
an array. Find their mean and standard deviation using pointers 
and display the same to the output screen.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float std_dev,sum=0,sumsqr=0,mean,value,variance=0.0,a[100];
    printf("Abhishek Negi Section H 20011740\n");
	printf("Enter value of n : ");
    scanf("%d",&n);
    printf("\nEnter numbers : ");
    for(i=0;i<n;i++)
    {
    	printf("\nNumber %d : ",i+1);
    	scanf("%f",&a[i]);
    	sum=sum+a[i];
    }
	mean=sum/n;
    sumsqr=0;
	for(i=0;i<n;i++)
    {
		value=a[i]-mean;
    	sumsqr=sumsqr+value*value;
	}
    variance=sumsqr/n;
    std_dev=sqrt(variance);
    printf("\nMean of %d numbers = %f\n",n,mean);
    printf("\nStandard deviation of %d numbers = %f\n",n,std_dev);
}
