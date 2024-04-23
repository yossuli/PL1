#include <stdio.h>

int main() {
  int n;
  printf("Number?");
  scanf("%d", &n);
  switch (n) {
  case 1:
    printf("%dst\n", n);
    /* FALLTHRU */
  case 2:
    printf("%dnd\n", n);
    /* FALLTHRU */
  case 3:
    printf("%drd\n", n);
    break;
  default:
    printf("%dth\n", n);
    break;
  }
  return 0;
}