#include <stdint.h>
#include <stdio.h>

// void print_binary(uint32_t n) {
//   for (int i = 31; i >= 0; i--) {
//     printf("%d", (n >> i) & 1);
//     if (i == 31) {
//       printf(" ");
//     }
//     if (i == 23) {
//       printf(" ");
//     }
//   }
//   printf("\n");
// }

void to_binary(double n, double i) {
  if (i == 16777216) {
    printf("\n");
    return;
  }
  if (n == 0) {
    printf("\n");
    return;
  }
  double nn = n - (1 / i);
  // printf("n = %f\n", n);
  // printf("1 / i = %f\n", 1 / i);
  if (nn < 0) {
    printf("0");
    return to_binary(n, i * 2);
  }
  printf("1");
  return to_binary(nn, i * 2);
}

int main() {
  // union {
  //   float f;
  //   uint32_t u;
  // } v;
  to_binary(0.15624, 1);
  // v.f = 0.15625;
  // printf("%f\n", v.f);
  // print_binary(v.u);
  // v.f = 0.15624;
  // printf("%f\n", v.f);
  // print_binary(v.u);

  return 0;
}