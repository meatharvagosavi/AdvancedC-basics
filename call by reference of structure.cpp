#include<stdio.h>

struct student
{
	char name[50];
	int roll;
	float marks;
};

void findGrade(struct student *s)
{
	if(s->marks>=80)
	{
		printf("%s has obtained A grade\n",s->name);
	}
	else if(s->marks>=60)
	{
		printf("%s has obtained B grade\n",s->name);
	}
	else if(s->marks>=40)
	{
		printf("%s has obtained C grade\n",s->name);
	}
	else
	{
		printf("%s is failed\n",s->name);
	}
}

int main()
{
	struct student s;
	printf("enter student name\n");
	scanf("%s",&s.name);
	printf("enter student marks\n");
	scanf("%f",&s.marks);
	
	findGrade(&s);
	
	return 0;
}
