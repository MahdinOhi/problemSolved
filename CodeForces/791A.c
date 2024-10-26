#include <stdio.h>
int main()
{
    int l, b;

    scanf("%d", &l);
    scanf("%d", &b);

    int i;
    for (i = 1; i < 1000; i++)
    {
        l = l * 3;
        b = b * 2;
        if (l > b)
        {
            break;
        }
    }
    printf("%d", i);
    return 0;
}