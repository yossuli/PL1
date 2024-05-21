#include <stdio.h>

int main() {
  int i = 10;      // 配置アドレスは 0xfffa7c70
  int *pi = &i;    // 配置アドレスは 0xfffa7c74
  int **ppi = &pi; // 配置アドレスは 0xfffa7c78

  printf("i = %d\n", i);
  printf("&i = %p\n", &i);
  printf("*pi = %d\n", *pi);
  printf("pi = %p\n", pi);
  printf("&pi = %p\n", &pi);
  printf("**ppi = %d\n", **ppi);
  printf("*ppi = %p\n", *ppi);
  printf("ppi = %p\n", ppi);
  printf("&ppi = %p\n", &ppi);
  return 0;
}
