#include<stdio.h>
int main()
{
	int arr[5];
	int *ptr;
	int i,sum=0;
	
	printf("enter array elements (upto 5)\n");
	for(i=0;i<5;i++)
	printf("%d",arr[i]);
	
	ptr=arr;
	
	for(i=0;i<5;i++)
	{
     sum=sum+*ptr;
	 ptr++;	
	}	
}
