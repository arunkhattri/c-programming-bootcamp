#include <stdio.h>

int main() {
    float a, b, c;
    float max, min;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    max = a;
    min = b;

    if (a < b) {
        max = b;
        min = a;
    }
    if (max < c) {
        max = c;
    }
    if (c < min) {
        min = c;
    }
    printf("Minimum: %f\nMaximum: %f\n", min, max);
    }
