// add the system call getreadcount to xv6
// The system call returns the value of a counter which is
// incremented every time any process calls the read() system call.
// Following is the function signature for the call:
// int getreadcount(void)

// testgetreadcount - https://github.com/shauryashekhar/CS-537-Operating-Systems/tree/master/Project4/xv6-Scheduling/xv6-scheduler

#include "kernel/types.h" // for uint
#include "kernel/stat.h" // for struct stat
#include "user/user.h" // for printf
#include "kernel/syscall.h" // for SYS_getreadcount

// use the user-level function to invoke the getreadcount system call
int getreadcount(void)
{
  return syscall(SYS_getreadcount);
}

int main(int argc, char *argv[])
{
  int count = getreadcount();
  printf("The number of read system calls is %d\n", count);
  exit(0);
}






