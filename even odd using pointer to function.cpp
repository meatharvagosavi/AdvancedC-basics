#include<stdio.h>
#include<stdlib.h>
int main()
{
	int array[10];
	int *arrayptr= array;
	
	int arrayEven[10];
	int *ptreven= arrayEven;
	
	int arrayOdd[10];
	int *ptrodd= arrayOdd;
	
	int i,j;
	
	for(i=0;i<10;i++)
	{
		array[i]=rand()%100;
		
		if(array[i]%2==0)
		{
			printf("%d",array[i]);
			printf("even number\n");
		}
		else
		{
			printf("%d",array[i]);
			printf("odd number\n");
		}
	}
	return 0;
}
