#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int next = n + 1;
    while (!isPrime(next))
        next++;

    cout << (next == m ? "YES" : "NO");

    return 0;
}
