#include <stdio.h>

int main() {
  FILE *fp = fopen("empty.txt", "w");
  if (!fp) {
    printf("ERROR: failed to open file\n");
    return 1;
  }
  fclose(fp);
  return 0;
}