#include <stdio.h>

int process_a() { return 1; }
int process_b() { return 0; }
int process_c() { return 1; }

void stop() { printf("error\n"); }

int main() {
  int ok = process_a();
  if (ok)
    goto error;

  ok = process_b();
  if (ok)
    goto error;

  ok = process_c();
  if (ok)
    goto error;
error:
  stop();
  printf("complete!\n");
  return 0;
}