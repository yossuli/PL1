#include <stdio.h>
#include <string.h>
void my_strcpy(char *to, char *from) {
  int i;
  for (i = 0; from[i] != '\0'; i++) {
    to[i] = from[i];
  }
  to[i] = '\0';
}
int main() {
  char a[20], b[20];
  strcpy(a, "INIAD");
  my_strcpy(b, "INIAD");
  printf("%s\n", a);
  printf("%s\n", b);
  return 0;
}