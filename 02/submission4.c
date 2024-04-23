#include <stdio.h>
int main() {
  printf("┌---┬----┬----┬----┬----┬----┬----┬----┬----┬----┐\n");
  printf("├   |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |\n");
  printf("├---┼----┼----┼----┼----┼----┼----┼----┼----┼----┤\n");
  for (int i = 1; i <= 9; i++) {
    printf("| %d ", i);
    for (int j = 1; j <= 9; j++) {
      if (i * j < 10) {
        printf("|  %d ", i * j);
      } else {
        printf("| %d ", i * j);
      }
    };
    printf("|\n");
    if (i != 9) {
      printf("├---┼----┼----┼----┼----┼----┼----┼----┼----┼----┤\n");
    } else {
      printf("└---┴----┴----┴----┴----┴----┴----┴----┴----┴----┘\n");
    }
  };
};