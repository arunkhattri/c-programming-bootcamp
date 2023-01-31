#include <stdio.h>

int main() {
  int num;
  int h, t, u, res;

  printf("Enter 3-digit number: ");
  scanf("%d", &num);

  h = num / 100;
  t = (num / 10) % 10;
  u = num % 10;

  // Option: 1
  printf("Reversed Number of %d: %d%d%d\n", num, u, t, h);

  // Option: 2
  res = 100 * u + 10 * t + h;
  printf("Reversed Number of %d: %d\n", num, res);
}
