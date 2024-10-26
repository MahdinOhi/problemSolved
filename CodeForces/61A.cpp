#include <iostream>
using namespace std;
#include <string>
int main()
{
    string a, b, result;

    cin >> a;
    cin >> b;

    if (a.length() != b.length())
        return 1;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
            cout << '1';
        else
            cout << '0';
    }

    return 0;
}