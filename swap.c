#include <stdio.h>

int main() {
  int a = 10;
  int b = 15;
  int temp;

  printf("a = %d\nb = %d\n", a, b);

  // swap
  temp = a;
  a = b;
  b = temp;

  printf("[-] After swap:\na = %d\nb = %d\n", a, b);
}
