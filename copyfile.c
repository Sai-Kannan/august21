#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=fopen("aug20.txt","r");
	FILE *fr=fopen("aug19.txt","w");
	char ch[100],text[100];
	if(fp==NULL||fr==NULL)
	{
		printf("unable to open file");
		exit(2);
	}
		fgets(ch,100,fp);//tries to access from one file
	   // puts(ch);
	    fputs(ch,fr);//copying the whole string into other file
	    fgets(text,100,fr);
	   puts(text);
}
