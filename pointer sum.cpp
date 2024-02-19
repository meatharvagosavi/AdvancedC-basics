#include<stdio.h>
int main()
{
	int a,b,c;
	a=10;
	b=20;
	
	int *pa=&a;
	int *pb=&b;
	int *pc=&c;
	*pc=*pa+*pb;
	printf("sum is %d",c);
	return c;
}
