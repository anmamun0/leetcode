class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int n = nums.size(), earn = 0;
    
            for(auto c:nums)
            {
                if(earn < 0 ) return 0;
                earn = max(earn,c);
                
                earn--;
            }
            return 1;
        }
    };