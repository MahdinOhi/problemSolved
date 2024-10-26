#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *maxPtr = max_element(arr, arr + n);

    float maxElement = *maxPtr;

    int diff[n];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        diff[i] = maxElement - arr[i];
        sum = sum + diff[i];
    }

    cout << sum << endl;
    return 0;
}
