#include <stdio.h>

int main() {
  FILE *fp = fopen("test.txt", "r");
  ;
  if (!fp) {
    fprintf(stderr, "ERROR: failed to open file\n");
    return 1;
  }

  char buf[128];

  while (fgets(buf, sizeof(buf), fp)) {
    printf("%s", buf);
  }
  printf("\n");

  fclose(fp);
  return 0;
}
