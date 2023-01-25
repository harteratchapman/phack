#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct person {
  char name[16];
  int  uid;
};

int fun_print_name(struct person *p)
{
  printf("%s\n",p->name);
}

struct person* read_person_from_disk() {
  struct person *ptmp;
  ptmp = (struct person*) malloc(sizeof(struct person));
  strcpy(ptmp->name, "red");
  return ptmp; 
}

int main(int argv, char *argc[]) {
  struct person user_on_stack;
  struct person *user;

  user = (struct person*) malloc(sizeof(struct person));
  strcpy(user->name,"mike");
  fun_print_name(user);

  free(user);

  user = (struct person*) malloc(sizeof(struct person));
  strcpy(user->name,"dan");
  fun_print_name(user);
  free(user);

  user = read_person_from_disk();
  fun_print_name(user);
  free(user);
 
  strcpy(user_on_stack.name, "phil");
  fun_print_name(&user_on_stack);

}
