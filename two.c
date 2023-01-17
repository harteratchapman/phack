#include <stdio.h>

#define NAME xray
#define DIV1 x/y

#define DEBUG 1

int main(int argv, char *argc[]) {

#ifndef DEBUG
  printf("hello world\n");
  printf(NAME);
#endif

  int x = 4;
  int y = 2;

  int z = DIV1;

#ifdef DEBUG
  printf("%d", z);
#endif


}
