#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int officers = 0;
    int crimes_count = 0;

    for (int i = 0; i < n; ++i)
    {
        int event;
        scanf("%d", &event);

        if (event == -1)
        {
            if (officers > 0)
            {
                officers -= 1;
            }
            else
            {
                crimes_count += 1;
            }
        }
        else
        {
            officers += event;
        }
    }

    printf("%d\n", crimes_count);

    return 0;
}
