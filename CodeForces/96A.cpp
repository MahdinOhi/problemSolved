#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int countOne = 0;
    int countZero = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
        {
            countOne++;
            countZero = 0;
        }
        else if (str[i] == '0')
        {
            countZero++;
            countOne = 0;
        }

        if (countOne >= 7 || countZero >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
