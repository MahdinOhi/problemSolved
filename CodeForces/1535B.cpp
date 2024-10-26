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

        vector<int> vec(n);

        for (int &x : vec)
            cin >> x;

        sort(vec.begin(), vec.end(), [](int x, int y)
             { return x % 2 < y % 2; });

        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                ans += __gcd(vec[i], vec[j] * 2) > 1;
            }
        }
        cout << ans << endl;
    }
}