#include<stdio.h>
#define max 50
typedef struct Studentinfo
{
	char name[20];
	int rollno;
}stdinfo;
stdinfo readinfo(int i)
{
	stdinfo Student;
	printf("Student %d:\n",i+1);
	printf("Name : ");
	scanf("%s",Student.name);
	printf("Roll no. : ");
	scanf("%d",&Student.rollno);
	return (Student);
}
stdinfo printinfo(stdinfo Student)
{
	printf("Name : %s\nRoll no. : %d\n",Student.name, Student.rollno);
}
int main()
{
	int i, n;
	stdinfo student[max];
	printf("Enter the number of student :\n");
	scanf("%d",&n);
	for(;i<n;i++)
	{
		student[i] = readinfo(i);
	}
	printf("Student Information:\n");
	for(i=0;i<n;i++)
	{
		printinfo(student[i]);
	}
	return 0;
}
