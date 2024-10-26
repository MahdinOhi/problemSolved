#include <stdio.h>
#include <string.h>

int main()
{
    char s[500];
    char t[500];
    char combined[1000];

    scanf("%s", s);
    scanf("%s", t);

    printf("%lu %lu\n", strlen(s), strlen(t));

    sprintf(combined, "%s %s", s, t);

    printf("%s", combined);

    return 0;
}