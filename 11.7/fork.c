#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("******\n");
    pid_t pid=fork();
    while(1)
    {
        printf("----------\n");
        sleep(1);
     }
    return 0;
}
