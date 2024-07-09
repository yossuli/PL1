#include <stdio.h>

int isAlphabet(char c) {
  if (64 < c && c < 91) {
    return 1;
  }
  if (96 < c && c < 123) {
    return 1;
  }
  return 0;
}

int streq(char *s, char *t) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] - t[i] == 0) {
      continue;
    }
    if (isAlphabet(s[i]) && isAlphabet(t[i]) && (s[i] - t[i]) % 32 == 0) {
      continue;
    }
    return 0;
  }

  if (t[i] != '\0') {
    return 0;
  }
  return 1;
}

int main() {
  printf("result1: %s\n", streq("iniad", "iniAD") ? "True" : "False");
  printf("result2: %s\n", streq("INIAD", "INIADINI") ? "True" : "False");
  printf("result2: %s\n", streq("INIADINI", "INIAD") ? "True" : "False");
  printf("result3: %s\n", streq("iNiAd", "InIaD") ? "True" : "False");
  printf("result3: %s\n", streq("iNiAd!", "InIaD!") ? "True" : "False");
  return 0;
}