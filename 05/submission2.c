#include <stdio.h>
void interleave(char *d, char *a, char *b) {
  int i;
  for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
    d[i * 2] = a[i];
    d[i * 2 + 1] = b[i];
  }

  if (a[i] != '\0') {
    for (int j = i; a[j] != '\0'; j++) {
      d[i + j] = a[j];
    }
  } else {
    for (int j = i; b[j] != '\0'; j++) {
      d[i + j] = b[j];
    }
  }
}

int main() {
  char a[5] = "####";
  char b[11] = "University";
  char d[20];
  char aa[6] = "INIAD";
  char bb[5] = "####";
  char dd[20];
  interleave(d, a, b);
  printf("%s\n", d);
  interleave(dd, aa, bb);
  printf("%s\n", dd);
  return 0;
}