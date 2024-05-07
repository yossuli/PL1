#include "sub.c"
#include "sub2.c"
#include <stdio.h>

int main() {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", count());
  }
  printf("---\n");
  for (int i = 0; i < 5; i++) {
    printf("%d\n", count2());
  }
}