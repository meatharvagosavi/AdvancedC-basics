#include<stdio.h>
int main()
{
	int n1,n2,GCD,i;
	printf("enter the 1st number\n");
	scanf("%d",&n1);
	printf("enter the 2nd number\n");
	scanf("%d",&n2);
	for(i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		GCD=i;
	}
	printf("the GCD of %d and %d is %d",n1,n2,GCD);
	return 0;
}
