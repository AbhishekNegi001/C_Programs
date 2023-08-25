// Q 1).
#include<stdio.h>
#include<string.h>
typedef struct MobileInfo
{
    char name[50];
    int quantity;
    double price;
} Mobiledata;

Mobiledata read()
{
    Mobiledata a;
    printf("Enter the Mobile Brand name: \n");
    scanf("%s",a.name);
    printf("Enter the quantity of mobile: \n");
    scanf("%d",&(a.quantity));
    printf("Enter the price of 1 piece: \n");
    scanf("%lf",&(a.price));
    return a;
}

void search(Mobiledata b)
{
    char n[50];
    printf("Name of mobile brand to be searched\n");
    scanf("%s",n);
    if(strcmp(n,b.name)==0)
    {
        printf("In Hand Stock : %d\n",b.quantity);
        printf("Total Cost of Inventory: %6.2lf",(b.price)*(b.quantity));
    }
    printf("\n");
}
int main()
{
    printf("Name: Abhishek Negi  Section:H   Student ID: 20011740\n");
    printf("Q 1). \n");
    Mobiledata m[100];
    int ch,k=0,c=0;
    printf("1.Storing\n2.Searching\n3.Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&ch);
        if(ch==1)
        {
          m[k]=read();
          k++;
        }
        else if(ch==2)
        {
            search(m[c]);
            c++;
        }
        else
        {
            printf("Exiting the program .........");
            break;
        }
        printf("\n");
    }
   return 0;
}
