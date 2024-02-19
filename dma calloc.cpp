#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,sum=0,*ptr;
    ptr=(int*)calloc(10,sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not allocated\n");
		exit(0);
	}
	printf("printing sum of the values now.....\n");
	for(i=0;i<10;i++)
	{
		*(ptr+i)=i;
		sum=sum+*(ptr+i);
	}
	printf("%d",sum);
	free(ptr);
	return 0;
}
