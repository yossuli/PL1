#include <stdint.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp = fopen(argv[1], "r");
  if (argc != 2) {
    printf("Usage: %s <file related path>\n", argv[0]);
    return 1;
  }
  if (!fp) {
    fprintf(stderr, "ERROR: failed to open %s\n", argv[1]);
    return 1;
  }

  int32_t chars = 0;
  int c;
  while ((c = fgetc(fp)) != EOF) {
    if (64 < c && c < 91) {
      chars |= (1 << (c - 65));
    }
    if (96 < c && c < 123) {
      chars |= (1 << (c - 97));
    }
  }

  if (chars ^ (0xffffffff >> (32 - 26))) {
    printf("Unused chars: ");
    for (int n = 0; n < 26; n++) {
      if (!(chars >> n & 1)) {
        printf("%c\n", n + 65);
      }
    }
  }
  fclose(fp);
  return 0;
}
