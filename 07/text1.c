#include <stdio.h>
#include <time.h>

int main() {
  time_t now;
  char s[100];
  time(&now);
  printf("Current Time: %s\n", ctime_r(&now, s));
  return 0;
}
