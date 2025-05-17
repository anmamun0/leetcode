class Solution {
    public:
        int lengthOfLongestSubstring(string s) 
        {
            string t = "";
            int mx = 0;
    
            for(auto x:s)
            {
                if(t.find(x) != string::npos)
                {
                    auto first = t.find(x);
                    t = t.substr(first+1);
                }
                t += x;
                mx = max(mx,int(t.size()));
            }
            return mx;
            
        }
    };
