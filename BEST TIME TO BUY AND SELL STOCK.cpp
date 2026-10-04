class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price; // Update lowest price seen so far
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice; // Update maximum profit
            }
        }

        return maxProfit;
    }
};