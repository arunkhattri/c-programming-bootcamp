#include <stdio.h>

int main() {
  int a = 15;
  int b = 10;
  int temp;

  printf("a = %d\nb = %d\n", a, b);

  // swap
  temp = a;
  a = b;
  b = temp;

  printf("[-] After swap:\na = %d\nb = %d\n", a, b);

  // another way
  a = a - b;
  b = b + a;
  a = b - a;

  printf("[-] After another swap:\na = %d\nb = %d\n", a, b);
}
