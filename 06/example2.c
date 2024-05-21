#include <stdio.h>

struct person {
  char name[10];
  int age;
};

void show_person(struct person someone) {
  printf("%s (%d)\n", someone.name, someone.age);
}

void show_person2(struct person *p) {
  printf("%s (%d)\n", p->name, p->age);
  //
}

int main() {
  struct person enryo = {
      .name = "Enryo",
      .age = 24,
  };
  show_person(enryo);
  show_person2(&enryo);

  return 0;
}