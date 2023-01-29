#include <stdio.h>

int main() {
  double celsius, fahrenheit;

  printf("Enter temp in degree celsius: ");
  scanf("%lf", &celsius);

  fahrenheit = (celsius * 1.8) + 32;
  printf("Temp in fahrenheit: %.2lf\n", fahrenheit);
}
