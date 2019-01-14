#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main(void) {
  //syscall(SYS_write, 1, "hello, world!\n", 14);
  puts("tsest");
  
  return 0;
}