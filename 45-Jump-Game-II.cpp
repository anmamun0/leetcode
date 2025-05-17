class Solution {
    public:
        int jump(vector<int>& nums) 
        {
            int n = nums.size(), jump = 0, end = 0, cnt = 0;
            
            for(int i = 0; i< n-1; i++)
            {
                jump = max(jump, i+nums[i]);
    
                if(jump >= n-1){
                    cnt++;  break;
                }
                if(i == end){
                    cnt++; end = jump;
                }
            }
            return cnt; 
        }
    };