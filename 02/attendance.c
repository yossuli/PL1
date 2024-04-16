#include <stdio.h>

int main() {
  int input;
  printf("数値を入力：");
  scanf("%d", &input);
  if (input < 0) {
    printf("絶対値は%d\n", -input);
    return 0;
  }
  printf("絶対値は%d\n", input);
}