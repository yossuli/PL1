typedef struct person {
  int age;
  char name[80];
} Person;

typedef struct {
  Person *first;
  Person *last;
} PersonList;