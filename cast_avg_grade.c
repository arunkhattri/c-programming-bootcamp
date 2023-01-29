#include <stdio.h>

int main() {
  int mathGrad, scGrade, engGrade;
  double avg;

  printf("Enter Math marks   : ");
  scanf("%d", &mathGrad);
  printf("Enter Science marks: ");
  scanf("%d", &scGrade);
  printf("Enter English marks: ");
  scanf("%d", &engGrade);

  avg = (mathGrad + scGrade + engGrade) / 3.0;
  printf("[-] Average Marks  : %.2lf\n", avg);
}
