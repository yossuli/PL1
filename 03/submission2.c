#include <stdio.h>
void swap(double *a, double *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
int main() {
  double x = 1.0, y = 2.0;
  swap(&x, &y);
  printf("x = %lf, y = %lf\n", x, y);
  return 0;
}