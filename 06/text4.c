int main() {
  struct person {
    char name[10];
    int age;
  };
  struct person taro, hanako;
  struct person enryo = {
      .name = "Enryo",
      .age = 24,
  };
  printf("My name is %s\n", enryo.name);
  enryo.age = 35;
  struct person *p = &enryo;
  printf("I am %d years old\n", p->age);

  return 0;
}