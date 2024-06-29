#include <stdint.h>
#include <stdio.h>

typedef enum {
  Shoyu,
  Miso,
  Shio,
  Tonkotsu,
} Flavor;

#define OPT_LARGE (0x01)
#define OPT_SEAWEED (0x02)
#define OPT_EGG (0x04)
#define OPT_PORK (0x08)
#define OPT_ONION (0x10)

typedef struct {
  Flavor flavor;
  uint32_t options;
} Ramen;

void print_options(uint32_t opt) {
  if (opt & OPT_LARGE)
    printf("[large]");
  if (opt & OPT_SEAWEED)
    printf("[seaweed]");
  if (opt & OPT_EGG)
    printf("[egg]");
  if (opt & OPT_PORK)
    printf("[pork]");
  if (opt & OPT_ONION)
    printf("[onion]");
  putchar('\n');
}

int add_option(Ramen *ramen, int32_t options) {
  ramen->options |= options;
  return 0;
}

int remove_option(Ramen *ramen, int32_t options) {
  ramen->options ^= options;
  return 0;
}

int main() {
  Ramen myRamen = {
      .flavor = Shoyu,
      .options = OPT_SEAWEED | OPT_EGG,
  };

  print_options(myRamen.options);

  add_option(&myRamen, OPT_PORK);
  remove_option(&myRamen, OPT_EGG);

  print_options(myRamen.options);

  return 0;
}
