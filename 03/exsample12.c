#include <stdio.h>
int mul(int x, int y) { return x * y; }

int addmul(int a, int b) {
  int a2 = mul(a, a);
  int b2 = mul(b, b);
  return a2 + b2;
}

int main() {
  int r = addmul(3, 4);
  printf("result = %d\n", r);
  return 0;
}