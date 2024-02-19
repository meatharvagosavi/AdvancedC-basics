#include<stdio.h>

int getFib (int n)
{
	if(n<=1)
	return 1;
	else
	return getFib(n-1)+getFib(n-2);
}

int main()
{
	int n,i;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("0");
	for(i=0;i<=n;i++)
	printf("%d",getFib(i));
}
