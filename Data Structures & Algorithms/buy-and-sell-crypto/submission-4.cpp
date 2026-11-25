class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int L = 0;
        int profit = 0;
        for (int R = 1; R < prices.size(); ++R) {
            if (prices[L] <= prices[R]) {
                profit = max(prices[R] - prices[L], profit);
            } else if (L < R) {
                L = R;
            }
        }
        return profit;
    } 
};
