#include <math.h>
#include <stdio.h>

/*
** Develop a calculator that:
** Reads character (+, -, *, /, %).
** Reads 2 numbers from user.
** calculate and printout the result.
*/

int main() {
  char mathOperator;
  double num1, num2;

  printf("Enter num1: ");
  scanf("%lf", &num1);
  printf("Enter num2: ");
  scanf("%lf", &num2);
  printf("Which mathematical operation? (+, -, *, /, %%); ");
  scanf(" %c", &mathOperator);

  switch (mathOperator) {
  case '+':
    printf("%.2f %c %.2f = %.2f\n", num1, mathOperator, num2, num1 + num2);
    break;
  case '-':
    printf("%.2f %c %.2f = %.2f\n", num1, mathOperator, num2, num1 - num2);
    break;
  case '*':
    printf("%.2f %c %.2f = %.2f\n", num1, mathOperator, num2, num1 * num2);
    break;
  case '/':
    printf("%.2f %c %.2f = %.2lf\n", num1, mathOperator, num2, num1 / num2);
    break;
  case '%':
    printf("%.2f %c %.2f = %.2lf\n", num1, mathOperator, num2,
           fmod(num1, num2));
    break;
  default:
    printf("[-] Error: invalid mathOperator %c\n", mathOperator);
    break;
  }
}
