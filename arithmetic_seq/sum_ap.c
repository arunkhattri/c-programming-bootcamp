#include <stdio.h>

// sum of an arithmetic sequence.

int main() {
  float d, a_1, a_n, s;
  int n;

  printf("Enter the initial term (a1): ");
  scanf("%f", &a_1);
  printf("Enter the difference in the AP (d): ");
  scanf("%f", &d);
  printf("Enter total number of elements in AP (n): ");
  scanf("%d", &n);

  a_n = a_1 + (n - 1) * d;
  s = (a_1 + a_n) * n / 2;
  printf("sum of arithmetic progression: %.2f\n", s);
}
