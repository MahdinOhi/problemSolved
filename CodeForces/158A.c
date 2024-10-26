#include <stdio.h>

int main()
{
    int n, k, count = 0;

    scanf("%d %d", &n, &k);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] >= num[k - 1] && num[i] > 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
