#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> evens, odds;

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        if (nums[i] % 2 == 0)
            evens.push_back(i + 1);
        else
            odds.push_back(i + 1);
    }

    cout << (evens.size() == 1 ? evens[0] : odds[0]) << endl;
    return 0;
}
