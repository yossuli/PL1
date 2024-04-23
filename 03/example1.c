#include <stdio.h>
void divide(int x, int y, int *quot, int *rem) {
  *quot = (int)(x / y);
  *rem = x % y;
}

int main() {
  int x, y;
  divide(123, 456, &x, &y);
  printf("%d %d\n", x, y);
}