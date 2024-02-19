#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int limit;
	int i,sum;
	printf("enter array limit here:\n");
	scanf("%d",&limit);
	
	ptr=(int*)malloc(limit*sizeof(int));
	
	for(i=0;i<limit;i++)
	{
		printf("enter the elements here\n");
		scanf("%d",(ptr+i));
	}
	
	for(i=0;i<limit;i++)
	{
		printf("entered elements are %d",*(ptr+i));
	}
	
	for(i=0;i<limit;i++)
	{
		sum=sum+*(ptr+i);
	}
	printf("sum of array element is %d",sum-1);
	return 0;
}
