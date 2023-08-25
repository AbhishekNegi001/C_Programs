//passing a structure by value
#include<stdio.h>
struct info
{
	char name[50];
	int age;
};

void display(struct info student)
{
	printf("Name : %s\nAge : %d",student.name, student.age);
}
int main()
{
	struct info s1 = {"Rohan",15};
	display(s1);
	return 0;
}
