#include <stdio.h>
int sigma(int n) {
  if (n == 1) {
    return 1;
  };
  return sigma(n - 1) + n;
};

int main() {
  printf("%d\n", sigma(4));
  printf("%d\n", sigma(10));
  printf("%d\n", sigma(15));
  return 0;
};