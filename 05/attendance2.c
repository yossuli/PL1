#include <stdio.h>

// 3次元ベクトル a を k 倍する関数
void scalar_multiplication(double *a, double k, double *x) {
  for (int i = 0; i < 3; i++) {
    x[i] = a[i] * k;
  }
}

int main() {
  double a[] = {1.0, 2.0, 3.0};
  double x[3];

  // ベクトル a を 5倍 した結果を x に代入する
  scalar_multiplication(a, 5.0, x);

  for (int i = 0; i < 3; i++) {
    printf("%lf ", x[i]);
  }
  printf("\n");

  return 0;
}
