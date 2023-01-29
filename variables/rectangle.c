#include <stdio.h>

int main() {
  double height, width, area;

  printf("height of rectangle: ");
  scanf("%lf", &height);
  printf("width of rectangle: ");
  scanf("%lf", &width);

  area = height * width;

  printf("Area of rectangle: %.2lf\n", area);
}
