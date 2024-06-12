#include <math.h>
#include <stdio.h>
extern double integral(double x1, double x2, double (*f)(double));

double circle_y(double x) {
  double y = sqrt(1 - (x * x));
  return y;
}

int main() {
  int start = -1;
  int end = 1;
  

  printf("%f\n", (integral(start, end, &circle_y) * 2));
  return 0;
}