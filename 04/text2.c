#include <stdio.h>

int main() {
  int a[] = {1, 2, 3, 4, 5};
  a[3] = 100;
  for (int i = 0; i < 5; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
  return 0;
}
