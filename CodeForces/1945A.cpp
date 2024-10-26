#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        while (b % 3 and c > 0)
        {
            b++;
            c--;
        }

        if (b % 3)
            cout << -1 << endl;
        else
        {
            if (c % 3 == 0)
                cout << a + (b / 3) + (c / 3) << endl;
            else
                cout << (a + (b + c) / 3) + 1 << endl;
        }
    }
    return 0;
}