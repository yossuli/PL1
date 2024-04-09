#include <stdio.h>
#include <unistd.h>
int main() {
  int seconds;
  printf("seconds = ");
  scanf("%d", &seconds);
  for (int i = 0; i < seconds; i++) {
    printf("%d\n", seconds - i);
    sleep(1);
  }
  return 0;
}
