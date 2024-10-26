#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int f[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }

    int res[n];
    for (int i = 0; i < n; i++)
    {
        res[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        res[f[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}
