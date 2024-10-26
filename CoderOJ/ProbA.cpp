#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;                   
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;

        int result = m / n;

        cout << result << endl;
    }
    return 0;
}
