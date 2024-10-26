#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int arr[4];

        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (arr[0] < arr[i])
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}