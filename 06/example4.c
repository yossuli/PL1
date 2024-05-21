#include <stdio.h>

typedef enum {
  ROCK,
  SCISSORS,
  PAPER,
} Hand;

int janken(Hand me, Hand opponent) {
  //
  return (1 + opponent - me) % 3 - 1;
}

int main() {
  printf("Rock vs Scissors: %d\n", janken(ROCK, SCISSORS));
  printf("Scissors vs Scissors: %d\n", janken(SCISSORS, SCISSORS));
  printf("Paper vs Scissors: %d\n", janken(PAPER, SCISSORS));
  return 0;
}
