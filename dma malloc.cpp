#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int*)malloc(15*sizeof(*ptr));
	if(ptr!=NULL)
	{
		*(ptr+5)=480;
		printf("value of 6th position is %d",*(ptr+5));
	}
	return 0;
}
