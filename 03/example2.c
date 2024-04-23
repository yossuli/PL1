#include <stdio.h>

void divide(int x, int y, int *quot, int *rem) {
  *quot = (int)(x / y);
  *rem = x % y;
}

int main() {
  int time_s, h, m, s;
  printf("time(s):");
  scanf("%d", &time_s);
  divide(time_s, 60, &m, &s);
  divide(m, 60, &h, &m);
  printf("%d:%d:%d\n", h, m, s);
}