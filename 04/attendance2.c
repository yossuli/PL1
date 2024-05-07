#include <stdio.h>

int main() {
  int i = 1;
  int *p_i;
  p_i = &i;
  printf("%d\n", *p_i);
}