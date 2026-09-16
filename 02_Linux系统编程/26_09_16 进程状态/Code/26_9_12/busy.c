#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("PID = %ld\n", (long)getpid());
    fflush(stdout);

    while (1)
    {
        printf("Working... \n");
        sleep(1000);
    }

    return 0;
}
