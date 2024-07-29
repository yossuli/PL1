#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LINES 1000
#define MAX_LINE_LENGTH 256

void shuffle(void *arr, size_t size, size_t n) {
  char *c_arr = (char *)arr;
  for (int i = 0; i < n; i++) {
    int j = rand() % (n - i);
    if (i != j) {
      char *arr_i = &c_arr[i * size];
      char *arr_j = &c_arr[j * size];
      char tmp[size];
      memcpy(tmp, arr_i, size);
      memcpy(arr_i, arr_j, size);
      memcpy(arr_j, tmp, size);
    }
  }
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s <file name>\n", argv[0]);
  }
  FILE *fp = fopen(argv[1], "r");

  if (!fp) {
    printf("ERROR: failed to open file %s\n", argv[1]);
    return 1;
  }

  char *lines[MAX_LINES];
  int n = 0;

  char buf[MAX_LINE_LENGTH];

  while (fgets(buf, sizeof(buf), fp)) {
    lines[n] = strdup(buf);
    n++;
  }
  fclose(fp);

  srand(time(NULL));

  shuffle(lines, sizeof(char *), n);

  for (int i = 0; i < n; i++) {
    printf("%s", lines[i]);
  }
  printf("\n");

  return 0;
}