#include <stdio.h>

typedef struct {
  int numer;
  int denom;
} fraction;

void fraction_print(fraction *p) {
  if (p->denom == 1) {
    printf("%d\n", p->numer);
    return;
  }
  printf("%d/%d\n", p->numer, p->denom);
}

void fraction_mul(fraction *result, fraction *a, fraction *b) {
  result->numer = (a->numer * b->numer);
  result->denom = (a->denom * b->denom);
  ;
}

int main() {
  fraction a = {.numer = 7, .denom = 3}; /* 7/3 */
  fraction b = {.numer = 2, .denom = 5}; /* 2/5 */
  fraction result;

  fraction_mul(&result, &a, &b);
  fraction_print(&result);

  return 0;
}
