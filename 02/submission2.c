#include <stdio.h>

int main() {
  double x;
  int y;
  printf("x=");
  scanf("%lf", &x);
  printf("y=");
  scanf("%d", &y);
  double result = 1;
  for (int i = 1; i <= y; i++) {
    result = result * x;
  }
  printf("result = %lf\n", result);
  return 0;
}