// #include <stdio.h>
// #include <string.h>

// // int longer(int argc, char *argv[]) {
// //   printf("%s\n", argv[(strlen(argv[1]) < strlen(argv[2])) + 1]);
// //   return 0;
// //   if (strlen(argv[1]) > strlen(argv[2])) {
// //     printf("%s\n", argv[1]);
// //     return 0;
// //   }
// //   printf("%s\n", argv[2]);
// //   return 0;
// //   // for (int i = 0; argv[1][i] != '\0'; i++) {
// //   //   if (argv[2][i] == '\0') {
// //   //   }
// //   // }
// // }

// // int longer(int argc, char *argv[]) {
// //   if (strlen(argv[1]) > strlen(argv[2])) {
// //     printf("%s\n", argv[1]);
// //     return 0;
// //   }
// //   printf("%s\n", argv[2]);
// //   return 0;
// // }

// int main(int argc, char *argv) {
//   if (strlen(argv[1]) > strlen(argv[2])) {
//     printf("%s\n", argv[1]);
//     return 0;
//   }
//   printf("%s\n", argv[2]);
//   return 0;
// }
#include <stdio.h>
#include <string.h>

int longer(int argc, char *argv[]) {
  if (strlen(argv[1]) > strlen(argv[2])) {
    printf("%s\n", argv[1]);
    return 0;
  }
  printf("%s\n", argv[2]);
  return 0;
}

int main(int argc, char *argv[]) {
  longer(argc, argv);
  return 0;
}
