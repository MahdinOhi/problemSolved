#include <bits/stdc++.h>
using namespace std;

int findSingleDigit(int a, int b, int c) {
  int bitmask = a ^ b ^ c;
  return bitmask;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    int result = findSingleDigit(a, b, c);
    cout << result << endl;                
  }

  return 0;
}
