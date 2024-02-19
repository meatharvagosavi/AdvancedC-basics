#include<stdio.h>
int main()
{
	int a[100],i,size,sum=0;
	printf("enter array size\n");
	scanf("%d",&size);
	printf("enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum of array elements is %d",sum);
	return 0;
}
