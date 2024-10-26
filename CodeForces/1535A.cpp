#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, z, y, e;
        cin >> x >> z >> y >> e;
        if (max(x, z) < min(y, e) || max(y, e) < min(x, z))
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}