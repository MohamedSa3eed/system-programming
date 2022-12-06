#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_PATH 4096

int main (int argc, char *argv[])
{
	if(argc > 1)
	{
		printf("program should not take arguments\n");
		exit(1);
	}
	char *pwd = (char *)malloc(sizeof(char)*MAX_PATH);
	getcwd(pwd,MAX_PATH);
	printf("%s\n",pwd);
	return 0;
}
