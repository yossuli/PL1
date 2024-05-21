#include <stdio.h>

void tail(char *s) {
  if (s[0] != '\0') {
    for (int i = 1; s[i] != '\0'; i++) {
      printf("%c", s[i]);
    }
  }
  printf("\n");
}

int main() {
  tail("INIAD");
  tail("i");
  tail("");
  return 0;
}