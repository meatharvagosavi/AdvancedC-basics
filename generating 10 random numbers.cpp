#include<stdio.h>
#include<stdlib.h>
int main()
{
	int numbers,i;
	printf("printing 10 random numbers\n");
	for(i=0;i<10;i++)
	{
		numbers=rand();
		printf("%d\n",numbers);
	}
	return 0;
}
