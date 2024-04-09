#include <stdio.h>

int main() {
  int X;
  int Y;
  int Z;
  printf("X:");
  scanf("%d", &X);
  printf("Y:");
  scanf("%d", &Y);
  printf("Z:");
  scanf("%d", &Z);
  int max = X;
  if (Y > max)
    max = Y;
  if (Z > max)
    max = Z;
  printf("Maximum value of is %d\n", max);
}