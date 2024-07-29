#ifndef MYGRAPH_H
#define MYGRAPH_H

#include <math.h>

typedef struct {
  double x, y;
} Point;

extern double distance(const Point *A, const Point *B);

#endif