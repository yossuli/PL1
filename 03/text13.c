#include <stdio.h>
int main() {
  int x = 12345;
  printf("x located at %p\n", &x);
  printf("main located at %p\n", &main);
  return 0;
}