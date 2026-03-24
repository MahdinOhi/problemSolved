// * Problem: 208A - Dubstep

/* 
Approach:
1. The song has "WUB" inserted between words, sometimes consecutively.
2. Iterate through the string:
   - If "WUB" is found, skip it and insert a single space (if not already added).
   - Otherwise, add the current character to the output.
3. Print the final result without extra leading/trailing spaces.
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main()
{
    fast_io;

    string input, output;
    cin >> input;

    for (int i = 0; i < (int)input.size();)
    {
        if (i + 2 < input.size() && input.substr(i, 3) == "WUB")
        {
            if (!output.empty() && output.back() != ' ')
                output += ' ';
            i += 3; // skip "WUB"
        }
        else
        {
            output += input[i];
            i++;
        }
    }

    cout << output << "\n";
    return 0;
}
