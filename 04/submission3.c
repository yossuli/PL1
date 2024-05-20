#include <stdio.h>
;
void add_vector(unsigned int *x, int *a, int *b) {
  for (int i = 0; i < 3; i++) {
    x[i] = a[i] + b[i];
  };
}

int main() {
  int a[] = {1, -2, 3};
  int b[] = {-3, 4, 5};
  unsigned int x[3];
  add_vector(x, a, b);
  printf("(");
  for (int i = 0; i < 3; i++) {
    printf("%d, ", x[i]);
  }
  printf(")\n");
  return 0;
}