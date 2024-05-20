#include <stdio.h>
#include <string.h>

int main() {
  char s[5] = "Toyo";
  char t[20] = "INIAD";
  t[5] = ' ';
  memcpy(&t[6], s, 5);
  printf("s = %s\n", s);
  printf("t = %s\n", t);

  return 0;
}