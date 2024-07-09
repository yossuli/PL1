#include <stdio.h>

void vprint(char a[]) {
  for (int i = 0; a[i] != '\0'; i++) {
    printf("%c\n", a[i]);
  }
}

int main() {
  vprint("INIAD is wonderful");
  return 0;
}