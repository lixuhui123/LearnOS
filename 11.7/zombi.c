#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{ 
    //子进程从创建之后的位置开始执行，父进程也是，因为程序时顺序执行的
    printf("******---%d\n",getpid());
    pid_t pid=fork();
    if(pid<0)
    {
      printf("fork error\n");
      return -1;
    }
    if(pid==0)
    {
      //这段代码只有子进程能够运行到，因为在子进程中fork的返回值为=0；
      printf("child fork success--%d\n",getpid());
      sleep(5);
      exit(0);
    }
    if(pid>0)
    {
      printf("this is parent%d\n",getpid());
      //这段只有父进程能运行到
    }
    while(1)
    {
        //父子都能运行到
        printf("-----------\n");
        sleep(1);
    }
return 0;
    
}


