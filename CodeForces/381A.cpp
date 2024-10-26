#include <iostream>
using namespace std;

int main()
{
    int n, sereja = 0, dima = 0, i, j, s;
    cin >> n;
    int aa[n];
    for (int i = 0; i < n; i++)
    {
        cin >> aa[i];
    }
    s = 0, j = n - 1;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (aa[s] > aa[j])
            {
                sereja = sereja + aa[s];
                s++;
            }
            else
            {

                sereja = sereja + aa[j];
                j--;
            }
        }
        else
        {
            if (aa[s] > aa[j])
            {

                dima = dima + aa[s];
                s++;
            }
            else
            {

                dima = dima + aa[j];
                j--;
            }
        }
    }
    cout << sereja << " " << dima << endl;

    return 0;
}