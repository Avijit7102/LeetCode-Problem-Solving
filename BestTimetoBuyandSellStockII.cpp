class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for(int i = 0; i < prices.size() - 1; i++)
        {
            if(prices[i + 1] > prices[i])
            {
                profit = profit + (prices[i + 1] - prices[i]);
            }
        }
        return profit;
    }
};
//just check if next element is greater than i value , thn  add it with profit + next element - i value
