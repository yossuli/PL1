#include <stdio.h>
int x = 1;
int main() {
  int x = 2;
  if (1) {
    int x = 3;
    printf("x = %d\n", x);
  }
  return 0;
}