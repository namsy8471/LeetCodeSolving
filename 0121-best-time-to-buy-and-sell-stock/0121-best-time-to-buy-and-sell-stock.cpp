class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;

        int min_price = 10001;
        int max_profit = 0;

        for(auto& i : prices)
        {
            if(min_price > i)
            {
                min_price = i;
            }
            else if(i - min_price > max_profit)
                max_profit = i - min_price;
        }

        return max_profit;
    }
};