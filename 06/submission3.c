#include <math.h>
#include <stdio.h>

typedef struct {
  enum {
    CIRCLE,
    RECTANGLE,
  } type;

  union {
    struct {
      int width;
      int height;
    } rectangle;
    struct {
      int radius;
    } circle;
  };
} Figure;

double area(Figure *p) {
  if (p->type == CIRCLE) {
    return (p->circle.radius) * (p->circle.radius) * M_PI;
  }
  return p->rectangle.height * p->rectangle.width;
}

int main() {
  Figure circle = {.type = CIRCLE, .circle.radius = 4};
  Figure rectangle = {
      .type = RECTANGLE, .rectangle.height = 4, .rectangle.width = 8};
  printf("%f\n", area(&circle));
  printf("%f\n", area(&rectangle));
  return 0;
}