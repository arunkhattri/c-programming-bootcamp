#include <stdio.h>
/*
 * make isosceles triangle
 *   *
 *  ***
 * *****
 * */

int main() {
  int n = 5;
  int i;
  /* char space = ' '; */
  int k = 2;

  for (i = 0; i < n; i += 2) {
    if (k > 0) {
      // https://stackoverflow.com/a/31934958/4858908
      // how to repeat char
      printf("%*s", k, "");
    }
    k--;
    for (int j = 0; j < i + 1; j++) {
      printf("*");
    }
    printf("\n");
  }
}
