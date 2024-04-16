#include <stdio.h>
int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  int tmp = factorial(n - 1);
  printf("%d! = %d\n", n, tmp);
  return tmp * n;
}

int main() {
  // int n;
  // printf("n = ");
  // scanf("%d", &n);
  factorial(50);
  return 0;
}