#include <iostream>
#include <set>
using namespace std;
int main()
{
    int y;

    cin >> y;

    for (int i = y;; i++)
    {
        y = y + 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && b != c && c != d && b != d && b != c && a != c && a != d && c != d)
        {
            break;
        }
    }
    cout << y;
    return 0;
}