#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int r = 0; r < 8; r++)
        {
            for (int c = 0; c < 8; c++)
            {
                char x;
                cin >> x;
                if (x != '.')
                {
                    cout << x;
                }
            } 
        }
        cout << '\n';
    }
    return 0;
}

