#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;
    int c = 0;

    scanf("%d", &n);

    char s[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &s[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
    }

    printf("%d", c);
    return 0;
}
