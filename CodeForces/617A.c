#include <stdio.h>
int main()
{
    int n, res = 0;
    scanf("%d", &n);
    res = n / 5;
    printf("%d\n", res);
    if (n % 5 != 0)
    {
        res += 1;
    }
    printf("%d\n", res);
}