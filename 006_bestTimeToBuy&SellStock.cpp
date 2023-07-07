#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;
        int len = prices.size();

        while (right < len) {
            //if profitable
            if (prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                maxProfit = max(profit, maxProfit);
            } else {
                left = right;
            }
            right++;
        }
        return maxProfit;
    }
};