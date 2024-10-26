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

    int max = max_element(begin(arr), end(arr));

    

    return 0;
}