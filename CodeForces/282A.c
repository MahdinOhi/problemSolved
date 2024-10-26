#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][4];

    for (int j = 0; j < n; j++)
    {
        scanf("%s", arr[j]);
    }

    char a[] = "++X";
    char b[] = "X++";
    char c[] = "--X";
    char d[] = "X--";

    int x = 0;
    for (int j = 0; j < n; j++)
    {
        // Use strcmp for string comparison
        if (strcmp(arr[j], a) == 0 || strcmp(arr[j], b) == 0)
        {
            x = x + 1;
        }
        else if (strcmp(arr[j], c) == 0 || strcmp(arr[j], d) == 0)
        {
            x = x - 1;
        }
    }

    printf("%d", x);
    return 0;
}
