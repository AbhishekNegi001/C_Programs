//inline function unlike normal functions replaces copy of code where function is called
//inline functions are usually faster than normal functions 
# include<stdio.h>
inline square(x) {
	return x*x;
}
int main()
{
	int num;
	printf ("Enter a number: ");
	scanf("%d", & num);
	printf("Square of number is: %d", square(num));
}
