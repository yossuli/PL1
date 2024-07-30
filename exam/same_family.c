#include <stdio.h>
#include <string.h>

typedef struct {
  char first_name[80];
  char family_name[80];
  int age;
} Person;

int same_family(Person *p, Person *q) {
  return strcmp(p->family_name, q->family_name) == 0;
}

int main() {
  Person ryuhei = {.first_name = "Ryuhei", .family_name = "Matsuda", .age = 41};
  Person yusaku = {.first_name = "Yusaku", .family_name = "Matsuda", .age = 75};
  Person enryo = {.first_name = "Enryo", .family_name = "Inoue", .age = 100};

  printf("ryuhei and yusaku: %s\n",
         same_family(&ryuhei, &yusaku) ? "same" : "different");
  printf("ryuhei and enryo: %s\n",
         same_family(&ryuhei, &enryo) ? "same" : "different");
  return 0;
}