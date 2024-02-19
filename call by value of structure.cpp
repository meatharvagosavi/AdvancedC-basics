#include<stdio.h>

struct numbers
{
	int num1;
	int num2;
};

int findlarger(struct numbers numbers);

int main()
{
	struct numbers numbers;
	printf("enter the two numbers\n");
	scanf("%d%d",&numbers.num1,&numbers.num2);
	int larger=findlarger(numbers);
	printf("the larger number is %d",larger);
	return 0;
}

int findlarger(struct numbers numbers)
{
	if(numbers.num1>numbers.num2)
	{
		return numbers.num1;
	}
	else
	{
		return numbers.num2;
	}
}

