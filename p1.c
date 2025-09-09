#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("P1 Begins\n");
	execl("./p2","p2",NULL);
	printf("P1 Ends\n");
}
