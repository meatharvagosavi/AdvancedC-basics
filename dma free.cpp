#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int*)malloc(15*sizeof(*ptr));
	if(ptr!=NULL)
	{
		*(ptr+2)=50;
		printf("value of 2nd integer is %d",*(ptr+2));
	}
	free(ptr);
}
