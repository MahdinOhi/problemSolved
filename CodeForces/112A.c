#include <stdio.h>
#include <strings.h>

int main()
{
    char str1[100];
    char str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int result = strcasecmp(str1, str2);

    if (result > 0)
    {
        printf("1\n");
    }
    else if (result < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
