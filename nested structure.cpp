#include<stdio.h>
#include<string.h>

struct employee
{
	int employeeId;
	char employeeName[20];
	float employeeSalary;
};

struct company
{
	char companyName;
	struct employee e1;
};

int main()
{
	struct company org;
	
	org.e1.employeeId=2103096;
	strcpy(org.e1.employeeName,"Atharva");
	org.e1.employeeSalary=56500.75;
	
	
	printf("Employee Id - %d\n",org.e1.employeeId);
	printf("Employee Name - %s\n",org.e1.employeeName);
	printf("Employee Salary - %.2f\n",org.e1.employeeSalary);
	
	return 0;
}
