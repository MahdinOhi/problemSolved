#include <iostream>
using namespace std;
int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;

        if (a + b >= 10 || a + c >= 10 || b + c >= 10)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}