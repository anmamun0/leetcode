class Solution {
    public:
        string longestPalindrome(string s) 
        {
            int n = s.size();
            vector<vector<int>> dp (n+5,vector<int>(n+5,-1));
    
            for(int len = n; len>0; len--)
            {
                for(int i = 0; i<(n-len+1); i++)
                { 
                    if(palindromic(s,i,i+len-1,dp)){
                        return s.substr(i,len); 
                    }
                }
            }
            return "";
        }
    
        int palindromic(string &s,int l, int r, vector<vector<int>>&dp)
        {
            if(l>=r) return 1;
            if(dp[l][r] != -1) return dp[l][r];
            if(s[l] == s[r])
            {
                return dp[l][r] =  palindromic(s,l+1,r-1,dp);
            }
            return dp[l][r] = 0;
        }
};