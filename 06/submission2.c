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

int euclid(int a, int b) {
  int c = a % b;
  if (c == 0)
    return b;
  return euclid(b, c);
}

void fraction_add(fraction *result, fraction *a, fraction *b) {
  int new_numer = a->numer * b->denom + b->numer * a->denom;
  int new_denom = (a->denom * b->denom);
  int divisor;
  if (new_denom > new_numer) {
    divisor = euclid(new_denom, new_numer);
  } else {
    divisor = euclid(new_numer, new_denom);
  }

  result->numer = (int)(new_numer / divisor);
  result->denom = (int)(new_denom / divisor);
  ;
}

int main() {
  fraction a = {.numer = 7, .denom = 3};  /* 7/3 */
  fraction b = {.numer = 2, .denom = 5};  /* 2/5 */
  fraction c = {.numer = 1, .denom = 15}; /* 2/5 */
  fraction result;
  fraction result2;

  fraction_mul(&result, &a, &b);
  fraction_print(&result);
  fraction_add(&result2, &result, &c);
  fraction_print(&result2);

  return 0;
}
