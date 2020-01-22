#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
void sigcb(int signum)//将触发的信号的值传递进来
{
    printf("recv signum:%d\n",signum);
}
int main()
{
    //signal 修改信号的处理方式
    //SIG_IGN 忽略处理
    //SIG_DFT 默认处理方式
    //signal(SIGINT,SIG_IGN);//将interrupt修改成ignore
    signal(SIGINT,sigcb);
    signal(SIGQUIT,sigcb);
    while(1)
    {
        printf("hello\n");
        sleep(1);
    }

    return 0;
}
