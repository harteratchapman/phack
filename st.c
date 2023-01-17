#include <stdio.h>


int main(int argv, char *argc[]) {

  int i;
  int a[10];
  int *p;

  int x = 4;
  int y = 2;

  for(i=0;i<75;i++)
    {
    a[i] = i;
    }
  // fun segmentation violation
  //for (i=0;i<75;i++) {
    //printf("%d\n", a[i]);
  //}

  p = a+3;
  printf("addr a = %x\n",p);
  printf("a = %d\n",*p);

  a[3] = 2112;
  printf("a = %d\n",*p);

  return 0;

  
}
