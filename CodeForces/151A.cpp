#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinks = k * l;
    int drinkToasts = drinks / nl;

    int limes = c * d;
    int salts = p / np;

    int answer = min(drinkToasts, min(limes, salts)) / n;

    cout << answer << endl;

    return 0;
}