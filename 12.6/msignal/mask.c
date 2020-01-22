#include<stdlib.h>
#include<signal.h>
#include<stdio.h>
#include<unistd.h>
void sigcb(int signum)
{
    printf("recv a signal :%d",signum);
}
int main()
{
    signal(SIGINT,sigcb);
    signal(40,sigcb);//40号信号
    //阻塞所有信号
   sigset_t set,old;
    sigemptyset(&set);
//清空信号集合
    sigemptyset(&old);
    sigfillset(&set);//将所有的信号都添加到set集合中
    sigprocmask(SIG_BLOCK,&set,&old);
    printf("press enter to continue\n");
    getchar();//在按下回车之前，所有的程序都卡在这里
    sigprocmask(SIG_UNBLOCK,&set,NULL);

    return 0;
}
