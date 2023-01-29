#include <stdio.h>

int main() {
  double fahrenheit, celsius;

  printf("Temp in Fahrenheit: ");
  scanf("%lf", &fahrenheit);

  celsius = (fahrenheit - 32) / 1.8;
  printf("Temp in Celsius   : %.2lf\n", celsius);
}
