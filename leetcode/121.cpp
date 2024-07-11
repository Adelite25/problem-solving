class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = 1;
        int maxP = 0;

        while (j < prices.size()) {
            if (prices[i] < prices[j]) {
                maxP = max(maxP, prices[j] - prices[i]);
            } else {
                i = j;
            }
            j++;
        }

        return maxP >= 0 ? maxP : 0;
    }
};
