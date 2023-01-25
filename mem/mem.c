#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char *argc[]) {
  char *mydata;

  mydata = malloc(13);
  strcpy(mydata,"hello world");

  printf("%s",mydata);
}
