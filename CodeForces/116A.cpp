#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int capacity = 0;
    int current_cap = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        current_cap = current_cap - a;
        current_cap = current_cap + b;
        capacity = max(capacity, current_cap);
    }
    cout << capacity;

    return 0;
}