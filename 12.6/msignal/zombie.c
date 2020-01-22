#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/wait.h>
void sigcb(int signum)
{
   while( waitpid(-1,NULL,WNOHANG)>0);//waitpid返回值>0,退出的子进程的pid。没有子进程退出的时候，它就返回0，出错时返回-1。
}//非阻塞状态
int main()
{
    signal(SIGCHLD,sigcb);
    pid_t pid =fork();
    if(pid==0)
    {
        printf("i am child\n");
        sleep(5);
        exit(0);
    }
   // waitpid(-1,NULL,0);//阻塞等待状态
    while(1)
    {
        printf("没空理你\n");
        sleep(1);
    }
    return 0;
}
