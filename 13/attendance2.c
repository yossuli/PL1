#include "mygraph.h"
#include <stdio.h>

int main() {
  Point A = {.x = 1, .y = 1};
  Point B = {.x = 1, .y = 5};

  printf("Distance is %lf\n", distance(&A, &B));
  return 0;
}
