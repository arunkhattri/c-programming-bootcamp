#include <stdio.h>

int main() {
  double d1 = 15.5;
  double d2 = 25.5;

  printf("Before swap:\nd1 = %lf\nd2 = %lf", d1, d2);

  d1 = d1 - d2;
  d2 = d1 + d2;
  d1 = d2 - d1;

  printf("After swap:\nd1 = %lf\nd2 = %lf", d1, d2);
}
