#include <iostream>
using namespace std;
int main()
{
    int n;

    int mCount = 0;
    int cCount = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m, c;

        cin >> m >> c;

        if (m < c)
        {
            cCount++;
        }
        else if (m > c)
        {
            mCount++;
        }
        else if (m == c)
        {
        }
    }

    if (mCount > cCount)
        cout << "Mishka";
    else if (mCount < cCount)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}