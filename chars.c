#include <stdio.h>
#include <string.h>

int fun2( char *param2) {
  char tmp;
  tmp = *param2;
  *param2 = *(param2+1);
  *(param2+1) = tmp;
}

int mycp(char *s1, char *s2) {

}

#define SZ 10

int main(int argv, char *argc[]) {

  int i;
  char s[SZ];
  char s2[SZ]
  char *sp;

  printf("sizeof s = %d\n",sizeof(s));
  
  strcpy(s, "hello");

  mycp(s,s2,SZ);

  sp = s;
  *sp = *sp;  // does nothing

  fun2(s);
  
  printf("s = %s\n",s);

  return 0;

  
}
