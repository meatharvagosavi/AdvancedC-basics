#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *ptr;
	ptr=(char*)malloc(10);
	strcpy(ptr,"Atharva");
	printf("%s,address-%u",ptr,ptr);
	
	ptr=(char*)realloc(ptr,20);
	strcat(ptr,"Gosavi");
	printf("\n %s,address-%u\n",ptr,ptr);
	
	free(ptr);
	return 0;
}
