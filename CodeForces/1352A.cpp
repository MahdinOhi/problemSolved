#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int num;
        cin >> num;

        string n = to_string(num);
        int len = n.length();

        vector<string> roundNumbers;

        for (int j = 0; j < len; j++)
        {
            if (n[j] != '0')
            {
                string roundNum = n[j] + string(len - j - 1, '0');
                roundNumbers.push_back(roundNum);
            }
        }

        cout << roundNumbers.size() << " ";
        for (const string &roundNum : roundNumbers)
        {
            cout << roundNum << " ";
        }
        cout << endl;
    }

    return 0;
}
