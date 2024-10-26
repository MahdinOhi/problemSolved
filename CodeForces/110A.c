#include <stdio.h>

int countLuckyDigits(long long n)
{
    int count = 0;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 4 || digit == 7)
        {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main()
{
    long long n;
    scanf("%lld", &n);

    // printf("%lld\n", n);

    int luckyDigitCount = countLuckyDigits(n);

    if (luckyDigitCount == 4 || luckyDigitCount == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
