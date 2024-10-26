#include <stdio.h>

int main()
{
    int k = 0, n = 0, w = 0;

    scanf("%d %d %d", &k, &n, &w);

    int total = k * w * (w + 1) / 2;

    int borrow_amount = total - n;

    printf("%d\n", borrow_amount > 0 ? borrow_amount : 0);

    return 0;
}
