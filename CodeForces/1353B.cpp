#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());

        for (int i = k; i < n; i++)
        {
            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
            }
        }

        int sum = accumulate(a.begin(), a.end(), 0);

        cout << sum << endl;
    }

    return 0;
}
