#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  FILE *fp = fopen(argv[1], "r");
  int c;
  int n = 0;
  char ASCII[16];
  while ((c = fgetc(fp)) != EOF) {
    if (n % 16 == 0) {
      printf("%08x  ", n);
    }
    if (n % 16 == 8) {
      printf(" ");
    }
    printf("%02x ", c);
    ASCII[n % 16] = isprint(c) ? c : '.';
    if (n % 16 == 15) {
      printf(" |%s|\n", ASCII);
    }
    n++;
  }
  for (int i = n % 16; i < 16; i++) {
    if (n % 16 == 8) {
      printf(" ");
    }
    printf("   ");
    ASCII[i] = 0;
  }
  if (n % 16 != 0) {
    printf(" |%s|\n", ASCII);
  }
  return 0;
}