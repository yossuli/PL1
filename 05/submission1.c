#include <stdio.h>

void pyramid(int n) {
  for (int j = 1; j <= n; j++) {
    for (int i = 0; i < n - j; i++) {
      printf(" ");
    }
    for (int i = 0; i < j * 2; i++) {
      printf("#");
    }
    printf("\n");
  }
}

int main() {
  pyramid(5);
  return 0;
}