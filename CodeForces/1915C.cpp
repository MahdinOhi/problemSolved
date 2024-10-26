#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            sum += x;
        }

        long long root = static_cast<long long>(sqrt(sum));
        if (root * root == sum)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}