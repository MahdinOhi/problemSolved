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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool flag = false;
        for (int i = 0; i < 256; ++i)
        {
            int ans = 0;
            for (int j = 0; j < n; ++j)
                ans ^= a[j] ^ i;
            if (ans == 0)
            {
                cout << i << '\n';
                flag = true;
                break;
            }
        }

        if (!flag)
            cout << -1 << '\n';
    }

    return 0;
}
