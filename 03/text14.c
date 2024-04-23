#include <stdio.h>
int main() {
  int x, *p, *q;
  x = 12345;
  p = &x;
  q = p;
  printf("x located at %p\n", &x);
  printf("value of q is %p\n", q);
  return 0;
}