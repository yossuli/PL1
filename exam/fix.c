#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 文字列の複製をヒープ上に作る関数 */
char *mystrdup(char *s) {
  char *t = (char *)malloc(strlen(s) + 1);
  printf("%d\n", strlen(s) + 1);
  strcpy(t, s);
  return t;
}

int main() {
  char *s = mystrdup("INIAD Toyo");
  printf("%s\n", s);
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    printf("%d\n", s[i]);
  }
  printf("%d\n", s[i + 1]);
  free(s);
  return 0;
}