class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = prices[0];
        int maxDiff = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            minVal = min(minVal, prices[i]);
            maxDiff = max(maxDiff, prices[i] - minVal);
        }
        
        return maxDiff;
    }
};