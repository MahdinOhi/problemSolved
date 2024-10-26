#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int div;
        cin >> div;

        if (div >= 1900)
            cout << "Division 1\n";
        else if (1600 <= div && div <= 1899)
            cout << "Division 2\n";
        else if (1400 <= div && div <= 1599)
            cout << "Division 3\n";
        else
            cout << "Division 4\n";
    }
    return 0;
}
