#include <stdio.h>
#include <stdlib.h>

typedef struct hoge {
  int fuga;
} HOGE;

int main1(void) {
  HOGE piyo;
  // ここを考える
  piyo.fuga = 3;
  return 0;
}

int main2(void) {
  HOGE *ppiyo;
  // ここを考える
  ppiyo = (HOGE *)malloc(sizeof(HOGE));
  ppiyo->fuga = 3;
  return 0;
}

typedef struct foo {
  HOGE *ppiyo;
} FOO;

int main3(void) {
  FOO bar;
  // ここを考える
  bar.ppiyo = (HOGE *)malloc(sizeof(HOGE));
  bar.ppiyo->fuga = 3;
  return 0;
}
int main() {
  main1();
  main2();
  main3();
  return 0;
}