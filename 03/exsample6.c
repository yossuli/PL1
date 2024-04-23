#include <stdio.h>

int process_a() { return 1; }
int process_b() { return 0; }
int process_c() { return 1; }

void stop() { printf("error\n"); }

int main() {
  int ok = process_a();
  if (ok) {
    ok = process_b();
    if (ok) {
      ok = process_c();
      if (ok) {
        printf("complete!\n");
      } else {
        stop();
      }
    } else {
      stop();
    }
  } else {
    stop();
  }
  return 0;
}