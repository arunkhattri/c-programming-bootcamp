#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // print digit starting from 1
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        // print "*"
        for (int k = 9; k >= i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
