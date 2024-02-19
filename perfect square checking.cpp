#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	int ivar;
	float ival;
	printf("enter any number\n");
	scanf("%d",&num);
	ival=sqrt((double)num);
	ivar=ival;
	if(ivar==ival)
	{
		printf("%d this is the perfect square\n",num);
	}
	else
	{
		printf("%d this is not the perfect square\n",num);
	}
	return 0;
}
