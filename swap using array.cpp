#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a=10,b=20;
	
	printf("the values before swapping %d %d\n",a,b);
	swap(&a,&b);
	printf("the values after swapping %d %d\n",a,b);
	return 0;
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
