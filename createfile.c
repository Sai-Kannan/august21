#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=fopen("aug20.txt","w");
	if(fp==NULL)
	{
		printf("memory is not available");
		exit(2);
	}
	else
	{
		fputc('D',fp);
		fputs("hello world how are you\n",fp);
	}
	fclose(fp);
	printf("written succesful\n");
}
