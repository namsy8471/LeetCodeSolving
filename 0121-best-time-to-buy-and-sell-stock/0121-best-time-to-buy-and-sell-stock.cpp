class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = 100000;
        int n = prices.size();

        for(auto price : prices)
        {
            if(price < min_price)
            {
                min_price = price;
            }
            else if (price - min_price > max_profit)
            {
                max_profit = price - min_price;
            }
        }

        return max_profit;
    }
};