class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a = prices[0];
        int profit = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            if(a > prices[i])
            {
                a = prices[i];
            }
            else
            {
                int x = max(profit, prices[i] - a);
                if(x > profit)
                {
                    profit = x;
                }
            }
        }

        return profit;
    }
};
