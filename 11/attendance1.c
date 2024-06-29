#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s <hour>\n", argv[0]);
    return 1;
  }

  int hour = atoi(argv[1]);
  if (hour < 0 || hour > 23) {
    printf("Hour must be between 0 and 23.\n");
    return 1;
  }

  int displayHour = hour % 12;
  if (displayHour == 0)
    displayHour = 12;

  char *period = (hour < 12) ? "AM" : "PM";
#ifdef LANG
  if (LANG == 1) {
    printf("%s%d時\n", (hour < 12) ? "午前" : "午後", displayHour);
  } else {
    printf("It's %d%s\n", displayHour, period);
  }
#else
  printf("It's %d%s\n", displayHour, period);
#endif

  return 0;
}