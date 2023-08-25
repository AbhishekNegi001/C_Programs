#include<stdio.h>
int main()
{
	struct student
	{
		char name[50];
		int rollno ;
		float age;
		char gender[10];
	};
	struct student s1;
	printf("Enter the name of Student : \n");
	fgets(s1.name,50, stdin);
	printf("Enter his rollno , age , gender : \n");
	scanf("%d%f%s", &s1.rollno, &s1.age, &s1.gender);
	printf("Information of Student:\n");
	printf("Name : %s \nRoll no. : %d \nAge : %1.1f \nGender : %s", s1.name, s1.rollno, 
	s1.age, s1.gender);
	return 0;
}
