#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    char t[101];

    cin >> s;
    cin >> t;

    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }

    if (strcmp(s, t) == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
