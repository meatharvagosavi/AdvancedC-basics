#include<stdio.h>
#include<math.h>

int smallestDivisor(int n)
{
	int i;
	for(i=2;i<=sqrt(n);++i)
	if(n%i==0)
	{
		return i;
	}
	return n;
}

int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("the samllest divisor of %d is %d",n,smallestDivisor(n));
	return 0;
}

