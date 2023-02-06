#include <stdio.h>

int main() {
  float num1, num2;

  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);

  if (num1 > num2) {
      printf("Min: %.2f\nMax: %.2f\n", num2, num1);
  } else  {
      printf("Min: %.2f\nMax: %.2f\n", num1, num2);
  }
}
