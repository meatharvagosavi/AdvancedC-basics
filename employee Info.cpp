#include<stdio.h>
struct employeeInfo
{
	int employeeId;
	char *gender;
	float salary;
}e1;

int main()
{
	e1.employeeId=2103096;
	e1.gender="Male";
	e1.salary=34500.50;
	
	printf("****Employee Information****\n\n");
	printf("%d",e1.employeeId);
	printf("%s",e1.gender);
	printf("%f",e1.salary);
	
	return 0;
}
