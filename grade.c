#include<stdio.h>
void main()
 {
     float s1,s2,s3,s4,s5,s6,avg;
     printf("enter your marks of 6 subjects:\n");
     scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6);
     avg = (s1+s2+s3+s4+s5+s6)/6;
     if(avg<0||avg>100)
     {
        printf("wrong choice");
     }
     else if(avg>80)
     {
         printf("grade==A");
     }
     else if(avg>=61&&avg<=80)
     {
         printf("grade==B");
     }
     else if(avg>=51&&avg<=60)
     {
         printf("grade==C");
     }
     else if(avg>=41&&avg<=50)
     {
         printf("grade==D");
     }
     else if(avg>=35&&avg<=40)
     {
         printf("grade==E");
     }
     else if(avg<35)
     {
         printf("grade==F");
     }

 }
