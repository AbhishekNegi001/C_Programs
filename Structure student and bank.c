/*
Q1
*/
#include<stdio.h>
int main()
{
	printf("Name: Abhishek Negi   Student ID:20011740  Section:H\n");
	printf("\n\n");
	printf("STUDENT INFORMATION");
	printf("\n\n");
	struct student_information
	{
	    char name[50];
	    int student_id;
	    char section;
	    long long int contact_number;
	};
	struct student_information sdata;
	printf("Enter the name of the student: ");
	scanf("%[^\n]s", sdata.name);

    printf("Enter the Student ID: ");
    scanf("%d", &sdata.student_id);

    printf("Enter the section: ");
    scanf(" %c", &sdata.section);

    printf("Enter the contact number: ");
    scanf("%lld", &sdata.contact_number);

    printf("\n\n");
    printf("Name of the student:%s\n", sdata.name);
    printf("Student ID:%d\n", sdata.student_id);
    printf("Section:%c\n", sdata.section);
    printf("Contact number:%lld\n", sdata.contact_number);

    printf("\n\n");
    printf("BANK ACCOUNT INFORMATION");
    printf("\n\n");
  
    struct bank_account_information
    {
           char name[50];
           int acc_number;
           char acc_type[50];
           char ifsc_code[50];
    };

    struct bank_account_information bdata;
    printf("Enter account holder's name: ");
    scanf("%[^\n]s", bdata.name);

    printf("Enter account number: ");
    scanf("%d", &bdata.acc_number);

    printf("Enter account type: ");
    scanf(" %s", bdata.acc_type);

    printf("Enter IFSC code: ");
    scanf("%s", bdata.ifsc_code);

    printf("\n\n");
    printf("Bank Account Holder's Name:%s\n", bdata.name);
    printf("Account Number:%d\n", bdata.acc_number);
    printf("Type of Account:%s\n", bdata.acc_type);
    printf("IFSC CODE:%s\n", bdata.ifsc_code);
}
