#include <stdio.h>
#include <stdlib.h>
int rmsp(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: %s <file path>\n", argv[0]);
    return 1;
  }
  FILE *fp = fopen(argv[1], "r");
  char buf[128];
  if (!fp) {
    perror("ERROR");
    return 1;
  }
  while (fgets(buf, sizeof(buf), fp)) {
    for (int n = 0; buf[n] != '\n'; n++) {
      if (buf[n] != ' ') {
        printf("%s", buf);
        break;
      }
    }
  }
  fclose(fp);
  return 0;
}

int main(int argc, char *argv[]) {
  rmsp(argc, argv);
  return 0;
}