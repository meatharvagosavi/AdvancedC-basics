#include<stdio.h>
int main()
{
	int size,a[size],largest,i;
	printf("enter array size:\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=1;i<size;i++)
	{
		if(largest<a[i])
		largest=a[i];
	}
	printf("the largest element is %d",largest);
	return 0;
}
