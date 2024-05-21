#include <stddef.h>
#include <stdio.h>
struct person {
  char name[10];
  int age;
};

int main() {
  printf("sizeof person = %ld\n", sizeof(struct person));
  printf("offset name = %ld\n", offsetof(struct person, name));
  printf("offset name = %ld\n", offsetof(struct person, age));
  return 0;
}