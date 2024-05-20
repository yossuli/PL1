#include <stdio.h>
#include <stdlib.h>
void *strdupcat(char *a, char *b) {
  int len_a, len_b;
  for (len_a = 0; a[len_a] != '\0'; len_a++)
    ;
  for (len_b = 0; b[len_b] != '\0'; len_b++)
    ;
  char *s = (char *)malloc(len_a + len_b);
  for (int i = 0; i < len_a; i++) {
    *(i + s) = a[i];
  }
  *(s + len_a) = ' ';
  for (int i = 0; i < len_b; i++) {
    *(i + s + len_a) = b[i];
  }
  return s;
}

int main() {
  char *s = strdupcat("INIAD", "Toyo");
  s[5] = 'Y';
  printf("%s\n", s);
  free(s);
  return 0;
}