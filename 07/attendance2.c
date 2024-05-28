#include <stdio.h>

void halfadder(int a, int b, int *sum, int *carry) {
  *sum = a ^ b;
  *carry = a & b;
}
int main() {
  int a = 0, b = 0;
  int aa = 0, bb = 1;
  int aaa = 1, bbb = 0;
  int aaaa = 1, bbbb = 1;
  int s, c;
  int ss, cc;
  int sss, ccc;
  int ssss, cccc;
  halfadder(a, b, &s, &c);
  halfadder(aa, bb, &ss, &cc);
  halfadder(aaa, bbb, &sss, &ccc);
  halfadder(aaaa, bbbb, &ssss, &cccc);
  printf("Sum: %d, Carry: %d\n", s, c);
  printf("Sum: %d, Carry: %d\n", ss, cc);
  printf("Sum: %d, Carry: %d\n", sss, ccc);
  printf("Sum: %d, Carry: %d\n", ssss, cccc);
  return 0;
}