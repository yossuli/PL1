#include <stdio.h>

int sum(int *a, int n) {
  int r = 0;
  for (int i = 0; i < n; i++) {
    r += a[i];
  }
  return r;
}

int main() {
  int a[] = {1, 2, 3, 4, 5};

  printf("1 + 2 + 3 + 4 + 5 = %d\n", sum(a, 5));
  printf("1 + 2 + 3 + 4 = %d\n", sum(a, 4));
  return 0;
}