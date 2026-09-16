#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
  pid_t id = fork();

  if (id == 0)
  {
    // child
    int count = 5;
    while (count--)
    {
      printf("我是子进程,count = %d\n",count);
      sleep(1);
    }
  }
  else
  {
    while (1)
    {
      printf("我是父进程\n");
      sleep(1);
    }
  }

  return 0;
}
