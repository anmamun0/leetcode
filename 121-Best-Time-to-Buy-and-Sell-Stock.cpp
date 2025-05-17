class Solution {
    public:
        int maxProfit(vector<int>& prices) { 
             
            int n = prices.size(), mx = 0, result = 0;
    
            for(int i = n-1; i>=0; i--)
            {
                int c = prices[i];
    
                result = max(result, mx-c);
                mx = max(mx, c);
            }
     
            return result;
        }
    };