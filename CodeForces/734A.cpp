#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    char s[n];

    cin >> s;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else if (s[i] == 'D')
        {
            d++;
        }
    }

    if (a > d)
    {
        printf("Anton");
    }
    else if (a < d)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}