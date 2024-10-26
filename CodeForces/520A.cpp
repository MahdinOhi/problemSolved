#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalpha(str[i]))
        {
            count++;
        }
    }

    if (count >= 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
