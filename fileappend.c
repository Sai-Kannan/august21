#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=fopen("aug20.txt","a");
	if(fp==NULL)
	{
		printf("memory is not available");
		exit(2);
	}
	else
	{
		fputs("i am fine>>>>>>>>>>>>\n7",fp);
	}
	fclose(fp);
	printf("written succesful\n");
}
