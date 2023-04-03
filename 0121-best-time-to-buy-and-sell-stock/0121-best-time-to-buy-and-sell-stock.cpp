class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minn=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            minn=min(prices[i],minn);
            profit=max(profit,prices[i]-minn);
        }
        return profit;
    }
};