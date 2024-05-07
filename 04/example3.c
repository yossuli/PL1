#include <stdio.h>

void add_matrix(unsigned int x[2][2], const int a[2][2], const int b[2][2]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      x[i][j] = a[i][j] + b[i][j];
    }
  }
}

int main() {
  unsigned int x[2][2];
  int a[2][2] = {{1, 2}, {3, 4}};
  int b[2][2] = {{5, -6}, {-7, 8}};
  add_matrix(x, a, b);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%4d", x[i][j]);
    }
    printf("\n");
  }
}
