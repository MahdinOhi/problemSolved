#include "bits/stdc++.h"
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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = accumulate(a.begin(), a.end(), 0);

        if (sum < n)
            cout << "1" << endl;
        else
            cout << sum - n << endl;
    }

    return 0;
}
