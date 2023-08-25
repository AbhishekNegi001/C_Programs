//  using multiline macro funtion
#include <stdio.h>
#define print(i, n) while(i<n){\
	printf("hemllo world\n");\
	i++;\
}
int main()
{
	int i = 0 ;
	print(i, 3);
}
