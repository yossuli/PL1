#include <stdint.h>
#include <stdio.h>

/**
 * Set the i-th (0 <= 0 < 32) bit of data stored at address to 1.
 * addressに格納されているdataのi bit目に1をセットする
 */
void setbit(uint32_t *address, int i) {
  *address |= (1 << i);
}

/**
 * Clear the i-th (0 <= 0 < 32) bit stored at address to 0.
 * addressに格納されているdataのi bit目を0にクリアする
 */
void clearbit(uint32_t *address, int i) {
  *address &= ~(1 << i);
}

int main() {
  uint32_t n = 4;
  printf("%d\n", n);
  setbit(&n, 2);
  clearbit(&n, 2);
  printf("%d\n", n);
  return 0;
}