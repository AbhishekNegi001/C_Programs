/*
Q2
*/
#include<stdio.h>
int main()
{
	int i;
    printf("Name:Abhishek Negi   Section:H  Student ID:20011740\n");
    printf("...........ABC CORPORATION............\n");
    printf("\n");
    struct employee_ABC_CORPORATION
    {
        char name[50];
        char empcode[50];
        char DOB[50];
        char netsal[50];
    };
    struct employee_ABC_CORPORATION emp[3];
    for(i=0;i<3;i++)
    {
    	printf("Enter %d employee name : ",i+1);
    	scanf("%s", emp[i].name);
    	printf("Enter employee code: ");
    	scanf("%s", emp[i].empcode);

    	printf("Enter Date of Birth: ");
    	scanf("%s", emp[i].DOB);

    	printf("Enter the net salary: ");
    	scanf("%s", emp[i].netsal);
    	printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
    	printf("Name of %d employee:%s\n",i+1, emp[i].name);
        printf("Employee Code:%s\n", emp[i].empcode);
    	printf("Date of Birth:%s\n", emp[i].DOB);
    	printf("Net Salary:%s\n", emp[i].netsal);
    	printf("\n");
    }
}
