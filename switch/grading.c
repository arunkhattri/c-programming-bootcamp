#include <stdio.h>

/*
 * grading system
 * A: 90-100
 * B: 80-89
 * C: 70-79
 * D: 60-69
 * E: 0-59
 */

int main() {
  char grade;
  printf("Enter grade obtained (A-F): ");
  scanf("%c", &grade);

  switch (grade) {
  case 'A':
    printf("Marks between 90-100.\n");
    break;
  case 'B':
    printf("Marks between 80-89.\n");
    break;
  case 'C':
    printf("Marks between 70-79.\n");
    break;
  case 'D':
    printf("Marks between 60-69.\n");
    break;
  case 'F':
    printf("Marks between 0-59.\n");
    break;
  default:
    printf("Ohh! didn't find any grade of that...\n");
    break;
  }
}
