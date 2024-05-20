#include <stdio.h>
#include <unistd.h>

int main() {
  const int N = 100;
  int Primzahlen[N];
  for (int i = 0; i < N; i++) {
    Primzahlen[i] = 0;
  }
  Primzahlen[0] = 1;
  for (int n = 2; n < (N + 2); n++) {
    if (Primzahlen[n - 1] == 1) {
      continue;
    }
    for (int i = 2; (n * i) < (N + 1); i++) {
      Primzahlen[n * i - 1] = 1;
    }
  }
  for (int i = 0; i < N; i++) {
    if (Primzahlen[i] != 1) {
      printf("%d,", i + 1);
    }
  }
  printf("\n");
  return 0;
}