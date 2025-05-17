class Solution {
    public:
        int maxProfit(vector<int>& stock) {
            int profit = 0;
    
            for(int i = 1; i < stock.size(); i++)
            {
                if(stock[i-1] < stock[i])
                {
                    profit += stock[i] - stock[i-1];
                }
            }
    
            return profit;
        }
    };