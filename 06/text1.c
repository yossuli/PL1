#include <stdio.h>

int main() {
  char *s = "INIAD";
  char **p = &s;
  printf("s = %p\n", s);
  printf("p = %p\n", p);
  return 0;
}