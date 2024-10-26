#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int digit = x % 10;
        string numStr = to_string(x);
        int numDigits = numStr.length();

        int totalPresses = 0;

        for (int d = 1; d < digit; d++)
        {
            totalPresses += 1 + 2 + 3 + 4;
        }

        for (int l = 1; l <= numDigits; l++)
        {
            totalPresses += l;
        }

        cout << totalPresses << endl;
    }
    return 0;
}
