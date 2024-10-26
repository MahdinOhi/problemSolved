#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> table(n, vector<char>(m, '.'));

    for (int i = 0; i < n; i += 2)
    {
        fill(table[i].begin(), table[i].end(), '#');
    }

    for (int i = 1; i < n; i += 4)
    {
        table[i][m - 1] = '#';
    }

    for (int i = 3; i < n; i += 4)
    {
        table[i][0] = '#';
    }

    for (const auto &row : table)
    {
        for (char cell : row)
        {
            cout << cell;
        }
        cout << endl;
    }

    return 0;
}
