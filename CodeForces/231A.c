#include <stdio.h>

int main()
{
    int n;
    int prob = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int team[3];
        int count = 0;

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &team[j]);
        }

        for (int j = 0; j < 3; j++)
        {
            if (team[j] == 1)
            {
                count++;
            }
        }

        if (count > 1)
        {
            prob++;
        }
    }

    printf("%d\n", prob);
    return 0;
}
