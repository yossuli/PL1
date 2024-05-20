#include <stdio.h>

void *my_strstr(const char *haystack, const char *needle) {
  int haystack_len, needle_len;
  for (haystack_len = 0; haystack[haystack_len] != '\0'; haystack_len++)
    ;
  for (needle_len = 0; needle[needle_len] != '\0'; needle_len++)
    ;
  for (int j = 0; j < haystack_len; j++) {

    for (int i = 0; i < needle_len; i++) {
      if (*(haystack + j + i) == *(needle + i)) {
        if (i == needle_len - 1) {
          return (char *)(haystack + j);
        }
        continue;
      }
      break;
    }
  }
  return NULL;
}

int main() {
  char a[] = "asdfghjkl";
  char b[] = "as";
  printf("%p\n", my_strstr(a, b));
  printf("%c%c\n", *(char *)(my_strstr(a, b)), *(char *)(my_strstr(a, b) + 1));
  char aa[] = "asdfghjkl";
  char bb[] = "ad";
  printf("%p\n", my_strstr(aa, bb));
  return 0;
}