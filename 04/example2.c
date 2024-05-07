#include <stdio.h>

unsigned int fib(unsigned int n) {
  if (n < 2) {
    return n;
  }
  unsigned int f[n + 1]; // n = 0 の時のサイズは (n + 1) = 1
  f[0] = 0;
  f[1] = 1; // ここでメモリ破（未定義動作）
  for (unsigned int i = 2; i <= n; i++) {
    f[i] = f[i - 1] + f[i - 2];
  }
  return f[n];
}

unsigned int fib2(unsigned int n) {
  if (n < 2) {
    return n;
  }
  unsigned int f[2] = {0, 1};
  for (unsigned int i = 2; i <= n; i++) {
    f[i % 2] = f[(i - 1) % 2] + f[(i - 2) % 2];
  }
  return f[n % 2];
}

int main() {
  printf("fib(40) = %u, ", fib(1));
  printf("fib2(40) = %u\n", fib2(1));
  printf("fib(40) = %u, ", fib(2));
  printf("fib2(40) = %u\n", fib2(2));
  printf("fib(40) = %u, ", fib(3));
  printf("fib2(40) = %u\n", fib2(3));
  printf("fib(40) = %u, ", fib(4));
  printf("fib2(40) = %u\n", fib2(4));
  printf("fib(40) = %u, ", fib(40));
  printf("fib2(40) = %u\n", fib2(40));
  return 0;
}
