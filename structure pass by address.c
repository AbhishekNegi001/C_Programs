#include<stdio.h>
typedef struct studentinfo
{
	char name[50];
	int Class;
	int rollno;
}student;
void readinfo(student *stu)
{
	printf("Enter the name, class and rollno of Student : \n");
	scanf("%s%d%d",(*stu).name,&(*stu).Class,&(*stu).rollno);
}
void printinfo(student st)
{
	printf("Name   : %s\n",st.name);
	printf("Class  : %d\n",st.Class);
	printf("Rollno : %d\n",st.rollno);
}
int main()
{
	student s1;
	readinfo(&s1);
	printinfo(s1);
	return 0;
}
