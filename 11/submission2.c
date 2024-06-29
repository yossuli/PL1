#include <stdint.h>
#include <stdio.h>

int rotate_left(int x, int n) {
  int over = x >> 32 - n;
  x = x << n | over;
  return x;
}

int main() {
  int32_t a = 0b00001111000011110000111100001111;
  int32_t b = 0b00001001000010110000110100001111;
  printf("%032b\n", a);
  printf("n = 4  %032b\n", rotate_left(a, 4));
  printf("n = 4  %032b\n", rotate_left(b, 4));
  printf("n = 6  %032b\n", rotate_left(b, 6));
  printf("n = 12 %032b\n", rotate_left(b, 12));
  return 0;
}