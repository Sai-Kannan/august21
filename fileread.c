#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *fr=fopen("aug20.txt","r");
	if(fr==NULL)
	{
		printf("memory is not available");
		exit(2);
	}
	else
	{
		while((ch=fgetc(fr))!=EOF)
		{
			printf("%c",ch);
			
		}
	//	fgets(ch,100,fr);
	}
	fclose(fr);
	printf("read succesful\n");
//	puts(ch);
	
}
