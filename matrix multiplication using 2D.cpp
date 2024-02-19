#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],n,i,j,k,sum=0;
	
	printf("for matrix A:enter matrix values\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("for matrix B:enter matrix values\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		}
	}
	
printf("the matrix multiplication is:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",c[i][j]);
	}
	printf("\n");
}
  return 0;
}
