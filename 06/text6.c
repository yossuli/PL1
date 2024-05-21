#include <stdio.h>
typedef struct {
  char name[10];
  int age;
} person;

void getold(person *someone) { someone->age++; }

int main() {
  person enryo = {.name = "Enryo", .age = 24};
  printf("%s (%d)\n", enryo.name, enryo.age);
  getold(&enryo);
  printf("%s (%d)\n", enryo.name, enryo.age);
  return 0;
}
