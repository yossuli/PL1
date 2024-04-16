#include <stdio.h>
int main() {
  int n;
  printf("正整数を入力：");
  scanf("%d", &n);
  int count = 1;
  while (n >= 10) {
    n = (int)(n / 10);
    printf("n=%d\n", n);
    count++;
  }
  printf("入力した数の桁数は%d\n", count);
  return 0;
}