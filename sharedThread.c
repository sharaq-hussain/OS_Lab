#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int a,b;
void *add(void *args)
{
	int sum=a+b;
	printf("Addition of two values:%d\n",sum);
}
void *subtract(void *args)
{
	int diff=a-b;
	printf("Subtraction of two values:%d\n",diff);
}
int main()
{
	pthread_t t1,t2;
	printf("Main Starts:\n");
	printf("Enter values of a,b:");
	scanf("%d%d",&a,&b);
	pthread_create(&t1,NULL,add,NULL);
	pthread_join(t1,NULL);
	pthread_create(&t2,NULL,subtract,NULL);
	pthread_join(t2,NULL);
	printf("Main ends");
}
