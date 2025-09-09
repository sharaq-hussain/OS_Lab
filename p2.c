#include<stdio.h>
#include<unistd.h>

int main()
{
        printf("P2 Begins\n");
        execl("./p3","p3",NULL);
        printf("P2 Ends\n");
}

