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

        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            int diff = 7 - (n % 7);
            cout << n + diff << endl;
        }
    }

    return 0;
}
