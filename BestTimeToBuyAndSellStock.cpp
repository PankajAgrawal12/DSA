int maxProfit(vector<int>& price) 
    {
        int minPrice=INT_MAX,profit=0;
        for(int i=0;i<price.size();i++)
        {
            minPrice=min(minPrice,price[i]);
            profit=max(profit,price[i]-minPrice);
        }
        return profit;
    }
