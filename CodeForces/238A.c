#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    scanf("%s", &str);

    int n = strlen(str);

    if (n % 2 == 0)
    {
        printf("IGNORE HIM!");
    }
    else
    {
        printf("CHAT WITH HER!");
    }
    return 0;
}