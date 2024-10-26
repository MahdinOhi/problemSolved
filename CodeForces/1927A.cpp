#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l = n + 1, r = 0;
        for (int i = 1; i <= n; ++i)
        {
            char c;
            cin >> c;
            if (c == 'B')
            {
                l = min(l, i);
                r = max(r, i);
            }
        }
        cout << r - l + 1 << '\n';
    }
    return 0;
}