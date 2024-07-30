#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rep(int c, int n) {
  char *p = (char *)malloc(n + 1);
  char s[n + 1];
  for (int i = 0; i < n; i++) {
    s[i] = c;
  }
  s[n] = '\0';
  strcpy(p, s);
  return p;
}

int main() {
  char *s = rep('A', 10);
  printf("%s\n", s);
  for (int i = 0; i < 11; i++) {
    printf("%d\n", s[i]);
  }
  free(s);
  return 0;
}