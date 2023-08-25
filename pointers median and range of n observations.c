/*
Name: Abhishek Negi 
Student Id: 20011740
Roll no.: 5
Section H

Q4).Accept the set of N observations from the user. Write a user defined
function to find the median and range of the set of observations. Display 
the median and range in the calling 2program. Decide upon the appropriate 
data types for storage and calling mechanism. 
*/
#include <stdio.h>
void swap(float *p,float *q) 
{
	float t;
	t=*p;
	*p=*q;
	*q=t;
}
void median(float arr[],int n)
{ 
    int i,j;
    float m;
    for(i = 0;i < n-1;i++) 
	{
        for(j = 0;j < n-i-1;j++) 
		{
        if(arr[j] > arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }
	}
    if(n % 2 == 0)
	{
        m = (arr[n / 2] + arr[n / 2 - 1]) / 2;
	}
    else
	{
        m = arr[n / 2 - 1];
	}
    printf("The Median is: %.1f\n", m);
}
void range(float arr[],int n)
{
    int max,min;
    max =arr[n-1];
    min =arr[0];
    printf("The Range is: %d",max-min);
}
int main() 
{
    int n,i;
    float arr[40];
    float *ptr =arr;
    printf("Question 4:Abhishek Negi Section H Roll no.: 5 \n\n");
    printf("How many values: ");
    scanf("%d",&n);
    printf("Enter the Observations: ");
    for (i =0;i<n;i++)
	{
    	scanf("%f",(ptr+i));
    }
   median(arr,n);
   range(arr,n);
   return 0;
}
