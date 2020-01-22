#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
void sigcb(int signum)
{
    printf("recv signum:%d\n",signum);
}
int main()
{

    struct sigaction newact;
    struct sigaction oldact;
    newact.sa_handler =sigcb;
    newact.sa_flags=0;
    sigemptyset(&newact.sa_mask);
    //sigaction 修改信号的处理动作为newact，原来的动作使用oldact保存
    sigaction(SIGINT,&newact,&oldact);
    while(1)
    {
        printf("hello\n");
        sleep(1);
    }
    return 0;
}
