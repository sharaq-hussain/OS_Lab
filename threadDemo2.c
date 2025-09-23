#include<stdio.h>
#include<pthread.h>
void *demo1(void *args)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Thread-1,i=%d\n",i);
		sleep(1);
	}
	printf("Thread ID=%ld\n",pthread_self());
}
void *demo2(void *args)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Thread-2,i=%d\n",i);
		sleep(1);
	}
	printf("Thread ID=%ld\n",pthread_self());
}

int main(){
	pthread_t t1,t2;
	printf("Main Starts\n");
	pthread_create(&t1,NULL,demo1,NULL);
	pthread_join(t1,NULL);
	pthread_create(&t2,NULL,demo2,NULL);
	pthread_join(t2,NULL);
	printf("Main Ends\n");
	return 0;
}
