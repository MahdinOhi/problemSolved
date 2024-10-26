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

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());
        bool flag = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (vec[i] == vec[i + 1])
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
