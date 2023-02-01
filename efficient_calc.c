#include <stdio.h>

// work for 1 to 14, then overflow

int main() {
  int x, x2, x4, x6, x8;

  printf("Enter x (int 1 to 14): ");
  scanf("%d", &x);

  x2 = x * x;
  x4 = x2 * x2;
  x6 = x4 * x2;
  x8 = x4 * x4;

  printf("x^2 = %d\nx^4 = %d\nx^6 = %d\nx^8 = %d\n", x2, x4, x6, x8);
}
