#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        char arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int flag = 0;

        for (int j = 0; j < n; j++)
        {
            for (int k = n - 1; k > j; k--)
            {
                if (arr[j] == arr[k])
                {
                    if (k - j > 1 && arr[j] != arr[j + 1])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
                break;
        }

        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
