#include <stdio.h>

int main() {
  char mat[2][3] = {{10, 20, 30}, {12, 34, 56}};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%3d", mat[i][j]);
    }
    printf("\n");
  }
}