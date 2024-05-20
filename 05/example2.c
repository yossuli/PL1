#include <stdio.h>
#include <string.h>
int my_strlen(char *c) {
  int strlen = 0;
  while (1) {
    strlen++;
    if (c[strlen] == '\0') {
      return strlen;
    }
  }
}

int main() {
  char a[] = "INIAD";
  printf("len a = %d\n", my_strlen(a));
  return 0;
}
