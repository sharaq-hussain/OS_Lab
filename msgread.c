#include<stdio.h>
#include<sys/msg.h>
#include<sys/ipc.h>
struct msgbuf
{
        long mtype;
        char mtext[20];
};
int main()
{
        struct msgbuf m;
        int msgid=msgget(1234,IPC_CREAT|0666);
        m.mtype=1;
        msgrcv(msgid,&m,20,1,0);
        printf("Message received=%s\n",m.mtext);
        return 0;
}
