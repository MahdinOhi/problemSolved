#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;

    cin >> n >> m;

    if (n > m)
        cout << "Extra" << n - m;

    else if (m > n)
        cout << "Sad" << m - n;
    else
        cout << "Perfect";
    return 0;
}