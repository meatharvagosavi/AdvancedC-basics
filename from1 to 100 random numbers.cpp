#include<stdio.h>
#include<stdlib.h>
int main()
{
	int random,i;
	printf("generating 10 random num from 1 to 100\n");
	for(i=0;i<10;i++)
	{
		random=rand()%100;
		printf("%d\n",random);
	}
	return 0;
}
