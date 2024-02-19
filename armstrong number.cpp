#include<stdio.h>
int main()
{
	int n,r,temp,sum=0;
	printf("enter any number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("the given no is armstrong number\n");
	}
	else
	{
		printf("the given no is not armstrong number");
	}
	return 0;
}
