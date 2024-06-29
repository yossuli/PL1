#include <stdio.h>
#include <stdlib.h>
#define IS_DIGIT(c) '0' <= c &&c <= '9'
int is_digit(char c) { return '0' <= c && c <= '9'; }

int main() {
  const char *testcase = "a1c80Z1!";
  for (int i = 0; testcase[i] != '\0'; i++) {
    char c = testcase[i];
    printf("%c %d %d\n", c, IS_DIGIT(c), is_digit(c));
  }
  char test = 57;
  char test1 = test;
  char test2 = test;
  

  printf("%c %d %d\n", test, IS_DIGIT(test1++), is_digit(test2++));
  return 0;
}
