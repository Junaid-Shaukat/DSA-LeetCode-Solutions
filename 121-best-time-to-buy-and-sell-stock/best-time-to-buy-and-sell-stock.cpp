class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minPrice = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else if (prices[i] - minPrice > maxPro) {
                maxPro = prices[i] - minPrice;
            }
        }

        return maxPro;
    }
};
