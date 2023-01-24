#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) {

  int r = random();

  printf("hello world %d\n",r);

  int mypid = fork();
  if (mypid!=0) {
    execl("../a.out", (char*)argc);
  }

  printf("me: %d    myrand:%d\n", mypid, r);
  r = random();
  printf("me: %d    myrand2:%d\n", mypid, r);

}
