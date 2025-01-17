#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (auto &i : v)
        cin >> i;

    int mx = v[0], mn = v[0];

    int ans = 0;

    for (int i = 1; i < n; ++i)
    {

        if (v[i] > mx)
        {

            mx = v[i];
            ++ans;
            continue;
        }

        if (v[i] < mn)
        {

            mn = v[i];
            ++ans;
            continue;
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}