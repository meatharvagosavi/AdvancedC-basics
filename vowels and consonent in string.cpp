#include<stdio.h>
int main()
{
	char s[1000];
	int i,vowel=0,consonent=0;
	printf("enter the string\n");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		vowel++;
		else
		consonent++;
	}
	printf("the number of vowels are %d",vowel);
	printf("and consonent are %d",consonent);
	return 0;
}
