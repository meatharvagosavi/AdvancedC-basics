#include<stdio.h>
#define ISEVEN(n) ((n%2==0)?1:0)
#define ISODD(n) ((n%2!=0)?1:0)
int main()
{
	int num;
	printf("enter any number\n");
	scanf("%d",&num);
	
	if(ISEVEN(num))
	{
		printf("the number is even\n");
	}
	else if(ISODD(num))
	{
		printf("the number is odd\n");
	}
	else
	{
		printf("invalid input\n");
	}
	return 0;
}
