#include <stdio.h>
int main() {
  int x, y, *p, *q;
  x = 12345;
  p = &x;
  q = p;
  y = *q;
  *q = 54321;
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  return 0;
}