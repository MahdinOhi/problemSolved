#include <stdio.h>
int main()
{
    int m, n, ar, max;

    scanf("%d %d", &m, &n);

    ar = m * n;

    max = ar / 2;

    printf("%d\n", max);
    return 0;
}