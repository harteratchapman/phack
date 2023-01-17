#include <stdio.h>

int fun1(int param1) {

   return (param1+4);
}

int fun2( int *param2) {

}

#define SZ 10

int main(int argv, char *argc[]) {

  int i;
  int a[SZ];
  int *p;

  int x = 4;
  int y = 2;

  printf("sizeof i = %d\n",sizeof(i));
  printf("sizeof a = %d\n",sizeof(a));

  for(i=0;i<SZ;i++)
    {
    a[i] = i;
    }

  p = a;
  p = p+3;
  *p = 42;

  printf("addr fun1 = %x\n",fun1);

  printf("fun1 respone: %d\n",fun1(42));

  for (i=0;i<SZ;i++) {
    printf("%d\n",a[i]);
  } 

  return 0;

  
}
