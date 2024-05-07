#include <stdio.h>

int main() {
  unsigned char a[4];
  short b[3] = {10, 20, 30};
  int arr[128];
  long nums[5] = {1, 2, 3, 4, 5};
  // OK
  short xs[] = {10, 20, 30};
  // NG
  // short xs[3];
  // xs = {10, 20, 30};
}
