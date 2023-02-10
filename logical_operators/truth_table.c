#include <stdbool.h>
#include <stdio.h>

int main() {
  bool t = true;
  bool f = false;

  // true = 1, false = 0

  printf("true && true  : %d\n", t && t);
  printf("true && false : %d\n", t && f);
  printf("false && false: %d\n", f && f);
  printf("true || true  : %d\n", t || t);
  printf("true || false : %d\n", t || f);
  printf("false || false: %d\n", f || f);
}
