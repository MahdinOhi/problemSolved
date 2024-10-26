#include <iostream>
using namespace std;
int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string in;
        int countA = 0;
        int countB = 0;

        cin >> in;

        for (int j = 0; j < 5; j++)
        {
            if (in[j] == 'A')
            {
                countA++;
            }
            else if (in[j] == 'B')
            {
                countB++;
            }
        }

        if (countA > countB)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}