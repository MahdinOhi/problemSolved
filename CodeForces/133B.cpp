#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    const int MOD = 1000003;

    unordered_map<char, string> dict = {
        {'>', "1000"},
        {'<', "1001"},
        {'+', "1010"},
        {'-', "1011"},
        {'.', "1100"},
        {',', "1101"},
        {'[', "1110"},
        {']', "1111"}};

    string program;

    cin >> program;

    string binary_string = "";

    for (char command : program)
    {
        binary_string += dict[command];
    }

    long long decimal_value = 0;

    for (char bit : binary_string)
    {
        decimal_value = (decimal_value * 2 + (bit - '0')) % MOD;
    }

    cout << decimal_value << endl;

    return 0;
}
