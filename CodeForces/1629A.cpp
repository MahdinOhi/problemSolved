#include <bits/stdc++.h>

using namespace std;

int maxRAM(int n, int k, vector<int> &a, vector<int> &b)
{
    vector<pair<int, int>> software;

    for (int i = 0; i < n; ++i)
    {
        software.emplace_back(a[i], b[i]);
    }

    sort(software.begin(), software.end());

    for (int i = 0; i < n; ++i)
    {
        if (software[i].first <= k)
        {
            k += software[i].second;
        }
    }

    return k;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        cout << maxRAM(n, k, a, b) << endl;
    }

    return 0;
}
