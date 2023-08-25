//in this program it is shown that macro function has no data 
//type as it will increment both string and intergers
#include <stdio.h>
# define increment(x) ++x
int main()
{
	 int a= 10;
	 char *ptr = "yo bro";
	 printf("10 after incrementing : %d", a , increment(a));
	 printf("\n\"yo bro\" after incrementing : %s", ptr, increment(ptr));
}
