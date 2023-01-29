#include <stdio.h>

int main() {
  int num1 = 5, num2 = 4;
  int result;
  double res;

  result = num1 / num2;
  printf("Result: %d\n", result);

  // casting
  res = (double)num1 / num2;
  printf("After casting Result: %lf\n", res);
}
