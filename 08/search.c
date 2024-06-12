#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp = fopen("./search.c", "r");
  if (!fp) {
    printf("ERROR: failed to open file\n");
    return 1;
  }
  char buf[128];
  int line = 1;
  while (fgets(buf, sizeof(buf), fp)) {
    if (strstr(buf, "int")) {
      printf("%d: %s", line, buf);
    }
    line++;
  }
  fclose(fp);
  return 0;
}