#include <stdio.h>
int find_zero(int *a, int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int nums[] = {0, 1, 2, 3, 4, 5};
  printf("0 %s nums\n", find_zero(nums, 6) ? "in" : "not in");
}
