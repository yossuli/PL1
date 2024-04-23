#include <stdio.h>
int bank = 0;

int withdraw(int amount) {
  if (bank < amount) {
    return 0;
  }
  bank = bank - amount;
  return 1;
}
void deposit(int amount) { //
  bank = bank + amount;
}

int balance() { //
  return bank;
}

int main() {
  int ok;
  deposit(300);
  ok = withdraw(500);
  printf("Transaction %s\n", ok ? "success" : "failed");
  deposit(400);
  ok = withdraw(500);
  printf("Transaction %s\n", ok ? "success" : "failed");
  printf("Final balance %d\n", balance());
  return 0;
}