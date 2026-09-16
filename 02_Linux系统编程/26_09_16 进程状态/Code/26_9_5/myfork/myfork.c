#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  int ret = fork();

  if (ret < 0)
  {
    perror("fork");
    return 1;
  }
  else if (ret == 0)
  {
    printf("子进程，pid = %d, ppid = %d, ret = %d\n", getpid(), getppid(), ret);
  }
  else
  {
    printf("父进程，pid = %d, ppid = %d, ret = %d\n", getpid(), getppid(), ret);
  }
  sleep(10);


  return 0;
}
