#include <stdio.h>

int find(int *a, int len, int (*cond)(int)) {
  int result = 0;
  for (int i = 0; i < len; i++) {
    if (cond(a[i]) == 1) {
      result = 1;
    }
  }
  return result;
}

int is_4(int n) {
  if (n == 4) {
    return 1;
  }
  return 0;
}

int main() {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int b[] = {1, 3, 5, 7, 9};
  int ans = find(a, sizeof(a) / sizeof(int), is_4);
  int ans2 = find(b, sizeof(b) / sizeof(int), is_4);
  printf("4 %s a\n", ans ? "in" : "not in");
  printf("4 %s b\n", ans2 ? "in" : "not in");
  return 0;
}