#include <stdio.h>
int max(int a, int b, int c, int d, int e, int *idx) {
  int max = a;
  int max_x = 1;
  if (max < b) {
    max = b;
    max_x = 2;
  }
  if (max < c) {
    max = c;
    max_x = 3;
  }
  if (max < d) {
    max = d;
    max_x = 4;
  }
  if (max < e) {
    max = e;
    max_x = 5;
  }
  if (idx) {
    *idx = max_x;
  }
  return max;
}

int main() {
  int n;
  int m = max(10, 30, 50, 40, 20, NULL);
  printf("%d (n = %d)\n", m, 0);
}