#include<stdio.h>

struct student
{
	char name[20];
	int age;
};

int main()
{
	struct student s;
	struct student *ptr=&s;
	
	printf("enter student name\n");
	scanf("%s",&ptr->name);
	printf("enter student age\n");
	scanf("%d",&ptr->age);
	
	if(ptr->age>=18)
	{
		printf("%s eligible to vote\n",ptr->name);
	}
	else
	{
		printf("%s not eligible to vote\n",ptr->name);
	}
	return 0;
}
