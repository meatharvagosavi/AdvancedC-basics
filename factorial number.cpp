#include<stdio.h>
int main()
{
	int fact=1,i,num;
	printf("enter the number upto you want to get the factorial\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of the given no is %d",fact);
	return 0;
}
