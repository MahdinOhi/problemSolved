#include <iostream>
#include <string>
using namespace std;

int main()
{
    string gname, hname, letters;
    cin >> gname >> hname >> letters;

    int sumLen = gname.size() + hname.size();
    int count = 0;

    if (sumLen != letters.size())
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < letters.size(); i++)
        {
            int pos_g = gname.find(letters[i]);
            int pos_h = hname.find(letters[i]);

            if (pos_g != string::npos)
            {
                gname[pos_g] = '-';
                count++;
            }
            else if (pos_h != string::npos)
            {
                hname[pos_h] = '-';
                count++;
            }
        }

        if (count == sumLen)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}
