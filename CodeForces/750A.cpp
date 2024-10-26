#include <iostream>
using namespace std;
int main()
{
    int n, k;

    cin >> n >> k;

    int remaining = 240 - k;

    int worktime = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        worktime += i * 5;
        count++;
        if (worktime > remaining)
        {
            count--;
            break;
        }
    }

    cout << count;

    return 0;
}