#include <stdio.h>

int shorter(int argc, char *argv[]) {
  for (int i = 0; argv[1][i] != '\0'; i++) {
    if (argv[2][i] == '\0') {
      printf("%s\n", argv[2]);
      return 0;
    }
  }
  printf("%s\n", argv[1]);
  return 0;
}

int main(int argc, char *argv) {
  shorter(argc, argv);
  return 0;
}