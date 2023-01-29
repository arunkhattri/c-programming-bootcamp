#include <stdio.h>

int main() {
  int curYr;
  int age;

  printf("Current Year: ");
  scanf("%d", &curYr);
  printf("Your Age: ");
  scanf("%d", &age);

  printf("Birth Year: %d\n", (curYr - age));
}
