#include<stdio.h>
#include<math.h>

int main()
{
	int num,number,ans,answ;
	printf("enter the number\n");
	scanf("%d",&num);
	ans=pow(num,0.5);
	printf("%d square root is %d",num,ans);
	printf("enter the number\n");
	scanf("%d",number);
	answ=pow(number,0.33);
	answ++;
	printf("%d cube root is %d",number,answ);
	return 0;
}
