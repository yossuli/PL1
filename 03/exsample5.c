#include <stdio.h>
int main() {
  int x, y;
  for (y = 1; y < 10; y++) {
    for (x = 1; x < 10; x++) {
      if (x * y == 63) {
        goto found;
      }
    }
  }
  printf("not found\n");
  return 1;
found:
  printf("%d * %d = 63\n", x, y);
  return 0;
}