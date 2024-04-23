#include <stdio.h>
int main() {
  int x, y, *p, *q;
  x = 12345;
  printf("x = %d\n", x);
  p = &x;
  printf("p = %p\n", p);
  q = p;
  printf("q = %p\n", q);
  printf("*q = %d\n", *q);
  y = *q;
  printf("y = %d\n", y);
  *q = 54321;
  printf("*q = %d\n", *q);
  printf("---\n");
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  return 0;
}