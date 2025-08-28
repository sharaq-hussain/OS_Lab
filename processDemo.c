//PROGRAM TO CREATE A PROCESS USING fork() , vfork()
#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t p;
	printf("main starts\n");
	p=fork();  //or vfork
	if(p>0)
		printf("Parent process is running id=%d\n",getpid());
	else if(p==0)
		printf("Child process is running child id=%d,parent id=%d\n",getpid(),getppid());
	else
		printf("Error in process creation\n");
}
