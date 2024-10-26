#include <iostream>
using namespace std;
int main()
{
    int n, h;

    cin >> n >> h;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int width = 0, row = 0;
    for (int i = 0; i < n; i++)
    {
        width = 1;
        if (a[i] > h)
        {
            width = 2;
        }
        row = row + width;
    }
    cout << row;
    return 0;
}