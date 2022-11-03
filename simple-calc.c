#include <stdio.h>

int main() {
  int x = 5;
  int y = 2;

  printf("%d + %d  = %d\n", x, y, x + y);
  printf("%d - %d  = %d\n", x, y, x - y);
  printf("%d x %d  = %d\n", x, y, x * y);
  printf("%g / %g  = %g\n", (float)x, (float)y, (float)x / y);
  printf("%d %% %d = %d\n", x, y, x % y);
}
