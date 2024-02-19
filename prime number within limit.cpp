#include<stdio.h>

int main()
{
	int num,i,high,low,count;
	printf("enter the upper limit\n");
	scanf("%d",&high);
	printf("enter the lower limit\n");
	scanf("%d",&low);
	for(num=low;num<=high;num++)
	{
		count=0;
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				count++;
			}
		}
		if(count==0 && num!=1)
		printf("%d",num);
	}
	return 0;
}
