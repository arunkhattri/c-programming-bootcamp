#include <stdio.h>

int main() {
  int grade;
  printf("Enter your grade: ");
  scanf("%d", &grade);

  if (grade >= 33) {
    printf("Congratulations!\n");
  } else {
    printf("Please try again..\n");
  }
}
