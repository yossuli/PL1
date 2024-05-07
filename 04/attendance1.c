#include <stdio.h>

void round100(unsigned int *p) {
  unsigned int remainder = *p % 100;
  if (remainder >= 50) {
    *p = *p - remainder + 100;
  } else {
    *p = *p - remainder;
  }
}

int main() {
  unsigned int a;
  a = 12345;
  unsigned int b;
  b = 34567;
  printf("%d\n", a);
  printf("%d\n", b);
  round100(&a);
  round100(&b);
  printf("%d\n", a);
  printf("%d\n", b);
  return 0;
}
