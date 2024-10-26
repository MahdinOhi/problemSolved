#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ways = (n - 1) / 2;

        cout << ways << endl;
    }

    return 0;
}
