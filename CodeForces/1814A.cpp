#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        if (!(n & 1))
            cout << "YES" << endl;
        else if (n % k == 0)
            cout << "YES\n";
        else if ((n - k) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}