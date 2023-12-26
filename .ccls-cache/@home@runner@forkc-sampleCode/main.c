#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  /* fork a child process */
  fork();
  /* fork another child process */
  fork();
  /* and fork another */
  fork();
  printf("PID = %d\n", getpid());
  
  return 0;
}

/* Run the Program in Shell
 * ~/forkc$ gcc main.c
 * ~/forkc$ ./a.out
 * 
 * Output:
 * PID = 215
 * PID = 218
 * ~/forkc$ PID = 216
 * PID = 219
 * PID = 220
 * PID = 222
 * PID = 217
 * PID = 221
 */