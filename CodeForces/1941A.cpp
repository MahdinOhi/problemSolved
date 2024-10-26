#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int arrN[n];
        int arrM[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arrN[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arrM[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arrN[i] + arrM[j] <= k)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
