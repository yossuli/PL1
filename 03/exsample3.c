#include <stdio.h>
int main() {
  int i = 1, sum = 0;
again:
  if (i > 10)
    goto end;
  sum += i++;
  goto again;
end:
  printf("sum = %d\n", sum);
  return 0;
}