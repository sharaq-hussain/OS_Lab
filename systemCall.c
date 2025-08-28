#include<stdio.h>
#include<unistd.h>
#include<wait.h>

int main()
{
	printf("main starts \n");
	pid_t p;
	p=fork();
	if(p==0)
	{
		printf("child starts\n");
		sleep(5);
		printf("child ends\n");
	}
	else if(p>0)
	{
		printf("parent starts\n");
		wait(NULL);
		printf("parent ends\n");
	}
	else
	{
		printf("error");
	}
}
