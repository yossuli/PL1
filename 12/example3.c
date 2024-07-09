#include <stdio.h>
#include <string.h>

typedef struct {
  char title[40];
  int price;
} Book;

void init_book(Book *p, char *title, int price) {
  p->price = price;
  strcpy(p->title, title);
}

int main() {
  Book book;
  init_book(&book, "Dragon Ball", 400);
  printf("%s (%d)\n", book.title, book.price);
  return 0;
}