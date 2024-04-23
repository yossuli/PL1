#include <stdio.h>

int count = 1;

void grass() {
  for (int i = 0; i < count; i++) {
    printf("w");
  }
  printf("\n");
  count++;
}
int main() {
  grass();
  grass();
  grass();
  return 0;
}