#include <stdio.h>

int main() {
  int num;
  int n1, n2, n3;

  printf("Enter 3 digit number: ");
  scanf("%d", &num);

  n1 = num / 100;
  n2 = (num / 10) % 10;
  n3 = num % 10;

  printf("Sum of digits: %d\n", n1 + n2 + n3);
}
