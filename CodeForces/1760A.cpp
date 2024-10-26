#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<int> vec;
        int a, b, c;
        cin >> a >> b >> c;

        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);

        sort(vec.begin(), vec.end());

        cout << vec[1] << endl;
    }
    return 0;
}
