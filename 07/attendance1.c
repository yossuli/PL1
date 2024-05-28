#include <stdio.h>

// date 構造体の定義
typedef struct {
  int year;
  int month;
  int day;
} date;

// date_to_str 関数の定義
void date_to_str(const date *d, char *s) {
  sprintf(s, "%04d-%02d-%02d", d->year, d->month, d->day);
}

int main() {
  date today = {.year = 2024,
                .month = 5,
                .day = 28};
  char s[10];
  date_to_str(&today, &s);
  printf("%s\n", s);
  return 0;
}