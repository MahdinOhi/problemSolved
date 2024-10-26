#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    while (t--)
    {
        int n, p, a, b;
        cin >> n >> p >> a >> b;

        int total = 0;
        if (n == 1)
        {
            total = p - a;
        }

        else if (n == 2)
            total = p - b;

        else
        {
            // int totalPriceSingle = (p - a) * n;
            total = (n / 2) * (2 * p - b) + (n % 2) * (p - a);
            // total = min(totalPriceSingle, totalPriceDouble);
        }
        cout << total << endl;
    }
    return 0;
}