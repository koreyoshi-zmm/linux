#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    printf("pid : %d\n", getpid());
    printf("ppid: %d\n", getppid());
    sleep(30);
    return 0;
}
