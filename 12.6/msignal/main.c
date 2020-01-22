#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
int a=0;
int b=0;
void test()
{
    a++;
    sleep(3);
    b++;
    printf("sum=%d",a+b);
}
void sigcb(int signum)
{
test();
}
int main()
{
    signal(SIGINT,sigcb);
    test();
    
    return 0;
}
