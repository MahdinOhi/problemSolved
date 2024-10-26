#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int odd = 0;

        for (int i = 1; i <= 2 * n; i++)
        {
            int in;
            cin >> in;
            if (in % 2 != 0)
            {
                odd++;
            }
        }
        cout << ((odd == n) ? "Yes" : "No") << endl;
    }
    return 0;
}