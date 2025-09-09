#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	pid_t p;
	p=fork();

	if(p>0)
	{
		printf("parent process starts\n");
		sleep(30);
		printf("parent process ends\n");
	}
	else if(p==0)
	{
		printf("child process starts\n");
		sleep(5);
		printf("child process ends\n");
		exit(0);
	}
	else
		printf("error in process creation\n");

	return 0;
}

