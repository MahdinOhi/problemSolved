#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            cout << "I hate  ";
        else
        {
            cout << "I love  ";
        }
        if (i != n)
        {
            cout << "that ";
        }
    }
    cout << "it";
    return 0;
}