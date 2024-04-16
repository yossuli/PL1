#include <stdio.h>
int main() {
  const int n;
  printf("整数を入力してください：");
  scanf("%d", &n);
  int result = 0;
  for (int i = 1; i <= n; i++) {
    result += (i * i * i * i);
  }
  printf("Sn = %d\n", result);
  return 0;
  
}