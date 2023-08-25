// Q 2.
#include <stdio.h>
union student
{
   char name[50];
   int USN, sem_num;
   char course;
   float per ;
} temp ;
struct student_info
{
   char name[50];
   int USN;
   int sem_num;
   char course;
   float per ;

} std;

int main()
{

    printf("Name: Abhishek Negi   Section:H   Student ID: 20011740\n");
    printf("Q 2).\n");
    printf("size of union = %lu bytes\n", (unsigned long) sizeof(temp));
    printf("size of structure = %lu bytes\n", (unsigned long) sizeof(std));
    if(sizeof(temp)<sizeof(std))
    {
        printf("Union uses memory optimally.\n");
    }
    else
    {
        printf("Structure uses memory optimally.\n");
	}
}
