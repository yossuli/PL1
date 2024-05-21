#include <stdio.h>

// SUN=0, MON=1...SAT=6
enum week { SUN, MON, TUE, WED, THU, FRI, SAT };

typedef enum { BLACK = 0, RED = 2, BLUE = 1 } color;

int main() {
  enum week w = SAT;
  color c;
  switch (w) {
  case SUN:
    c = RED;
    break;
  case SAT:
    c = BLUE;
    break;
  default:
    c = BLACK;
    break;
  }
  printf("week = %d, color = %d\n", w, c);
  return 0;
}