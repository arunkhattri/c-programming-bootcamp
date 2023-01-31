#include <stdio.h>

// nth term of an arithmetic sequence.

int main() {
  float d, a_1, a_n;
  int n;

  printf("Enter the initial term (a1): ");
  scanf("%f", &a_1);
  printf("Enter the difference in the AP (d): ");
  scanf("%f", &d);
  printf("Enter total number of elements in AP (n): ");
  scanf("%d", &n);

  a_n = a_1 + (n - 1) * d;
  printf("nth term: %.2f\n", a_n);
}
