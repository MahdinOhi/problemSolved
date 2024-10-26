#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];

        int profit = 0;
        for (int i = 0; i < prices.size(); i++){
            int currentPrice = prices[i];
            if (buyPrice > prices[i]) {
                buyPrice = prices[i];
            }
            profit = max(profit, currentPrice - buyPrice);
        }
        return profit;
    }
};