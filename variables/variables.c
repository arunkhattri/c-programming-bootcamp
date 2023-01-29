#include <stdio.h>

int main() {
  float grade1;
  float grade2;

  // user input
  scanf("%f", &grade1);
  scanf("%f", &grade2);

  printf("Average = %.2f\n", (grade1 + grade2) / 2);
}
