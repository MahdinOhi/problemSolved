#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    scanf("%s", str);

    int n = strlen(str);

    int distinct_chars = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
                break;
        }
        if (j == i)
            distinct_chars++;
    }

    if (distinct_chars % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}