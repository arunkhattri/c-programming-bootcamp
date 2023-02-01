#include <math.h>
#include <stdio.h>

int main() {
  double x1, y1, x2, y2;
  double res;

  printf("Enter first point coordinates (x1, y1): ");
  scanf("%lf %lf", &x1, &y1);

  printf("Enter second point coordinates (x2, y2): ");
  scanf("%lf %lf", &x2, &y2);

  res = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
  printf("Distance between points (%.2lf, %.2lf) and (%.2lf, %.2lf): %.2lf\n",
         x1, y1, x2, y2, res);
}
