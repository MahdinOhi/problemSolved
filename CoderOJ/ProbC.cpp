#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> min_delay(int T, vector<pair<int, vector<pair<int, int>>>> &test_cases)
{
    vector<long long> res;
    for (int i = 0; i < T; i++)
    {
        int n = test_cases[i].first;
        vector<pair<int, int>> &machines = test_cases[i].second;
        sort(machines.begin(), machines.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.first + a.second < b.first + b.second; });

        long long low = 1, high = 1e18;
        while (low < high)
        {
            long long mid = (low + high) / 2;
            long long count = 0;
            for (const auto &m : machines)
            {
                count += max(0LL, (mid - m.first) / m.second);
            }
            if (count >= n)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        res.push_back(high);
    }
    return res;
}

vector<pair<int, vector<pair<int, int>>>> take_input()
{
    int T;
    cin >> T;
    vector<pair<int, vector<pair<int, int>>>> test_cases;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> machines;
        for (int j = 0; j < 5; j++)
        {
            int a, b;
            cin >> a >> b;
            machines.push_back({a, b});
        }
        test_cases.push_back({n, machines});
    }
    return test_cases;
}

int main()
{
    vector<pair<int, vector<pair<int, int>>>> test_cases = take_input();
    vector<long long> result = min_delay(test_cases.size(), test_cases);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
