#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char ch;
	int d=0,p=0,i=0,n=0;
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
			if(isdigit(ch))
			d++;
			if(ispunct(ch))
			p++;
			if(islower(ch))
			i++;
			if(isupper(ch))
			i++;
			if(ch=='\n')
			n++;
		}
	//	fgets(ch,100,fr);
	}
	fclose(fr);
	printf("read succesful\n");
	printf("digits are : %d\nexpressions are : %d\nletters are : %d\nnew lines are : %d",d,p,i,n);
//	puts(ch);
	
}
