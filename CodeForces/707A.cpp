#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;

    cin >> n >> m;

    char img[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> img[i][j];
            (char)toupper(img[i][j]);
        }
    }

    int isColor = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (img[i][j] == 'C' || img[i][j] == 'M' || img[i][j] == 'Y')
            {
                isColor = true;
                break;
            }
        }
    }

    if (isColor)
        cout << "#Color";
    else
        cout << "#Black&White";

    return 0;
}