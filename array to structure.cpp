#include<stdio.h>

struct student
{
	char name[20];
	int studentId;
	float studentFee;	
};

int main()
{   
    int i,n;
	printf("how many record u have to store\n");
	scanf("%d",&n);
	struct student stuarr[n];
	for(i=0;i<n;i++)
	{
	 printf("enter %d records\n",i+1);
	 printf("enter name-\n");
	 scanf("%s",&stuarr[i].name);
	 printf("enter student Id-\n");
	 scanf("%d",&stuarr[i].studentId);
	 printf("enter student fee-\n");
	 scanf("%f",&stuarr[i].studentFee);	
	}
	printf("\nname\tid\tfee\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%d\t%f\n",stuarr[i].name,stuarr[i].studentId,stuarr[i].studentFee);
	}
	return 0;	
}
