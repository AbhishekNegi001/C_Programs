#include<stdio.h>
int main()
{
	char a[] = {'a', 'b', 'c', 'd'};
	char b[5] = {'x', 'y', 'z', '\0'};
	char c[4] = {'w','a','s','d'};
	char d[6] ="hello";
	char e[5] = "hemlo";
	char f[] = "hello world";
	char *g = "hello";
//	char *h = {'h','e','l','l','o'};
	printf("a : %s\n",a);
	printf("b : %s\n",b);
	printf("c : %s\n",c);
	printf("d : %s\n",d);
	printf("e : %s\n",e);
	printf("f : %s\n",f);
	printf("g : %s\n",g);
//	printf("h : %s\n",h);
	return 0;
}
