#include<stdio.h>
#include<pthread.h>

void *demo(void *args)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Thread-Executed,i=%d\n",i);
		sleep(1);
	}
	printf("Thread ID=%ld\n",pthread_self());
}
int main()
{
	pthread_t tid;
	printf("Main Starts\n");
	pthread_create(&tid,NULL,demo,NULL);
	pthread_join(tid,NULL);
	printf("Main Ends\n");
	return 0;
}
