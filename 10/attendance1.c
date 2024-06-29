#include <stdio.h>
#include <stdlib.h>

int rep(int argc, char *argv[]) {
  if (argc != 3) {
    printf("usage: %s <target string> <repeat count>\n", argv[0]);
    return 1;
  }

  int times = atoi(argv[2]);

  for (int i = 0; i < times; i++) {
    printf("%s\n", argv[1]);
  }
  return 0;
}

int main(int argc, char *argv[]) {

  rep(argc, argv);
  return 0;
}