#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],ch;
	int i,count;
	count=0;
	printf("enter any string\n");
	gets(str);
	printf("please enter the character you want to search\n");
	scanf("%c",&ch);
	for(i=0;i<=strlen(str);i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	}
	printf("total number of occurence of %c is %d times\n",ch,count);
	return 0;
}
