#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("program should take two arguments\n");
		exit(1);
	}
	char c ;
	FILE *source =fopen(argv[1],"r");
	FILE *destenation =fopen(argv[2],"w");
	if(source == NULL || destenation == NULL)
	{
		printf("error openning the files\n");
		exit(1);
	}
	while((c = getc(source)) != EOF)
	{
		fputc(c,destenation);
	}
	fclose(source);
	fclose(destenation);
	remove(argv[1]);
	return 0;
}
