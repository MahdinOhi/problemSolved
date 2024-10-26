#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;

        int num = 1;
        int count = 0;

        while (true)
        {
            if (num % 3 != 0 && num % 10 != 3)
            {
                count++;
                if (count == k)
                {
                    cout << num << endl;
                    break;
                }
            }
            num++;
        }
    }
    return 0;
}
