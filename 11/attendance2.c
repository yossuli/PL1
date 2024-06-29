#include <stdio.h>

int main() {
  int x = 0b101000;
  printf("%d\n", x >> 4 & 1);
  return 0;
}