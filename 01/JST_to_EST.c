#include <stdio.h>

int JST_to_EST(int JST) {
  int est = JST - 14;
  if (est < 0) {
    est += 24;
  }
  return est;
}

int main() {
  int hour;
  printf("今日本で何時(0-23)?");
  scanf("%d", &hour);
  printf("今ニューヨークでは%d時です\n", JST_to_EST(hour));
  return 0;
}