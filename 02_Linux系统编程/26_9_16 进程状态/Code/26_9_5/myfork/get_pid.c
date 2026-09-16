#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  int ret = fork();

  printf("hello proc, pid = %d, ppid = %d, ret = %d\n", getpid(), getppid(), ret);
  sleep(10);


  return 0;
}
