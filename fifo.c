#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
int mian()
{
    char *file="./test.fifo";
    umask(0);
   int res= mkfifo(file,0664);
    return 0;
}
