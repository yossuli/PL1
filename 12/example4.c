#include <stdint.h>
#include <stdio.h>

uint32_t flip13(uint32_t x) { return x ^ (1 << 13); }

int main() {
  uint32_t v = 0xdeadbeef;
  printf("%u -> %u\n", v, flip13(v));
  return 0;
}
