#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> teams(n);

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> teams[i].first >> teams[i].second;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j)
            {
                int homeColor_i = teams[i].first;
                int guestColor_j = teams[j].second;

                if (homeColor_i == guestColor_j)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
