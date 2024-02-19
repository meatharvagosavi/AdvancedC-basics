#include<stdio.h>
int main()
{
	int a;
	char b;
	float c;
	double d;
	long int e;
	unsigned long int f;
	short int g;
	
	printf("the size occupied by int is %d",sizeof(a));
	printf("the size occupied by char is %d",sizeof(b));
	printf("the size occupied by float is %d",sizeof(c));
	printf("the size occupied by double is %d",sizeof(d));
	printf("the size occupied by long int is %d",sizeof(e));
	printf("the size occupied by unsigned long int is %d",sizeof(f));
	printf("the size occupied by short int is %d",sizeof(g));


union total
{
	int a;
	char b;
	float c;
	double d;
	long int e;
	unsigned long int f;
	short int g;
}total;

printf("the total size of the union is %d",sizeof(union total));

return 0;
}
