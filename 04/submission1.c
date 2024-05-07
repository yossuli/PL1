#include <stdio.h>

int find_even(int *a, int len) {
  int result = 0;
  for (int i = 0; i < len; i++) {
    if (a[i] % 2 == 0) {
      result = 1;
    }
  }
  return result;
}
int main() {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int b[] = {1, 3, 5, 7, 9};
  int ans = find_even(a, sizeof(a) / sizeof(int));
  int ans2 = find_even(b, sizeof(b) / sizeof(int));
  printf("even number %s a\n", ans ? "in" : "not in");
  printf("even number %s b\n", ans2 ? "in" : "not in");
}