#include <stdio.h>

int main() {
  FILE *fp = fopen("pyramid.txt", "w");
  if (fp == NULL) {
    printf("ファイルを開けませんでした。\n");
    return 1;
  }
  int height = 5;
  for (int i = 0; i < height; i++) {
    for (int j = height - i - 1; j > 0; j--) {
      fprintf(fp, " ");
    }
    for (int k = 0; k < 2 * i + 1; k++) {
      fprintf(fp, "#");
    }
    fprintf(fp, "\n");
  }
  fclose(fp);
  return 0;
}