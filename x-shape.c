#include <stdio.h>
/* *-----* */
/* -*---* */
/* --*-* */
/* ---* */
/* --*-* */
/* -*---* */
/* *-----* */
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        printf("%*s*", i, "");
    for (int k = 5; k > 0; k -= 2)
    {
        printf("%*s*\n", k, "");
    }
    }
    for (int j = 3; j >= 0; j--)
    {
        printf("%*s*\n", j, "");
    }
}
