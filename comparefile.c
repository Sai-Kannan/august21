#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int i=0,j=0;
	FILE *fr=fopen("aug20.txt","r");
	FILE *fp=fopen("aug21.txt","r");
	if(fr==NULL||fp==NULL)
	{
		printf("memory is not available");
		exit(2);
	}
    char ch = getc(fr);
    char chr = getc(fp);
  
    // error keeps track of number of errors
    // pos keeps track of position of errors
    // line keeps track of error line
    int error = 0, pos = 0, line = 1;
    while ((ch==getc(fr)) != EOF && (chr==getc(fp)) != EOF)
    {
        pos++;
  
        // if both variablturns new
        // line then line variable is incremented
        // and pos variable is set to 0
        if (ch == '\n' && chr == '\n')
        {
            line++;
            pos = 0;
        }
  
        // if  data is not equal then
        // error is incremented
        if (ch != chr)
        {
            error++;
            printf("Line Number : %d \tError"
               " Position : %d \n", line, pos);
        }
  
        // fetching character until end of file
        ch = getc(fr);
       chr = getc(fp);
    }
  
    printf("Total Errors : %d\t", error);
}

