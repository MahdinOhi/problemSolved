#include <iostream>
using namespace std;
int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        char c;

        cin >> c;

        string str = "codeforces";

        int flag = 0;
        for (int j = 0; j < 10; j++)
        {
            if (str[j] == tolower(c))
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}