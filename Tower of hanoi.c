/*
Q1) Write a program to solve "Tower of Hanoi" puzzle using number of disks an user input.
*/
#include<stdio.h>
void toh(int n, char from_rod, char aux_rod, char to_rod)
{
    if(n==1)
	{
        printf("Move disk %d from %c to %c \n", n, from_rod, to_rod);
        return;
    }
    toh(n-1, from_rod, to_rod, aux_rod);
    printf("Move disk %d from %c to %c\n", n, from_rod, to_rod);
    toh(n-1, aux_rod, from_rod, to_rod);
}
int main()
{
    int n;
    printf("Abhishek Negi section D 20011740\n\n");
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    toh(n, 'S', 'A' , 'D' );
}
