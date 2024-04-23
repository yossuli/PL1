#include <stdio.h>
int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  int tmp = factorial(n - 1) * n;
  printf("%d! = %d\n", n, tmp);
  return tmp;
}

int main() {
  factorial(50);
  return 0;
}