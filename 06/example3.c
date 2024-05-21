#include <stdio.h>
struct person {
  char name[10];
  int age;
};

void getold(struct person *p) { p->age++; }

int main() {
  struct person enryo = {
      .name = "Enryo",
      .age = 24,
  };
  printf("%s (%d)\n", enryo.name, enryo.age);
  getold(&enryo);
  printf("%s (%d)\n", enryo.name, enryo.age);
  getold(&enryo);
  printf("%s (%d)\n", enryo.name, enryo.age);

  return 0;
}