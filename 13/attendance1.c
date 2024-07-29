int equal_bits(int x, int y) {
  int diff = (x ^ y);
  int count = 0;

  printf("%b\n", diff);
  for (diff; diff > 0; diff >>= 1) {
    count += ~diff & 1;
  }
  return count;
}

int main() {
  printf("%d\n", equal_bits(75, 225));
  return 0;
}