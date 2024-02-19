#include<stdio.h>
int gcd(int,int);
int main()
{
	int lcm,hcf,x,y;
	printf("enter two num\n");
	scanf("%d%d",&x,&y);
	hcf=gcd(x,y);
	lcm=(x*y)/hcf;
	printf("the hcf of %d and %d is %d\n",x,y,hcf);
	printf("the lcm of %d and %d is %d",x,y,lcm);
	return 0;
}

int gcd(int x,int y)
{
	if(x==0)
	{
		return y;
	}
	while(y!=0)
	{
		if(x>y)
		x=x-y;
		else
		y=y-x;
	}
	return x;
}
