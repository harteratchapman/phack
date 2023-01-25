#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int readln(int fd, char *buf, int maxlen)
{
   char *curloc = buf;
   int rc;
   while (((int)(curloc-buf))< maxlen) {
     rc = read(fd, curloc, 1);
     printf("read a character \n");
     if ( rc==1 ) {
        if ( *curloc=='\n') {
          break;
        }
        else {
          curloc++;
        }
     }
     else {
       break; 
     }
   } // while

   *curloc = 0;
}

int main(int argv, char *argc[]) {
  char line[128];
  int fd;

  fd = open("test.txt", O_RDONLY);
  if (fd>=0) {
    readln(fd, line, 128);
  } else {
    printf("Error opening file\n");
  }
  
  printf("%s\n",line);
}
