#include <stdio.h>

int main() {
  char a[3];
  char x = 1;
  char arr[] = {123, 456, 789};
  char *p = &x;
  printf("%p\n", p);
  printf("%p\n", a);
  p = arr;
  printf("%d\n", *p);
  printf("%d\n", *arr);
  printf("%d\n");
}