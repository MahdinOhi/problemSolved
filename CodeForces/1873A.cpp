#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string str;

        cin >> str;

        if (str[0] == 'a' && str[1] == 'b' && str[2] == 'c')
        {
            cout << "YES" << endl;
        }
        else if (str == "bca" || str == "cab")
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}