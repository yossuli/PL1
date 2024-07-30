#include <stdint.h>
#include <stdio.h>
int bit7(uint32_t x) {
  return (x >> 7) & 1;
}

int main() {
  uint32_t x = 255, y = 127;
  printf("bit7(%u) = %d\n", x, bit7(x));
  printf("bit7(%u) = %d\n", y, bit7(y));
  return 0;
}