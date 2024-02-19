#include<stdio.h>
int main()
{
	int arr1[100],arr2[100];
	int i,n;
	printf("input the numbers for array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("array elements are %d\n",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{   
	    arr2[i]=arr1[i];
	}
	printf("the elements stored are:\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr1[i]);
	}
	printf("\n");
	printf("the elements after copying are:\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr2[i]);
	}
	return 0;
}
