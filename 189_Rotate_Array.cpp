class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if(n==1 or k==0 or n==k)return;
        if(k>n)  k %= n; 

        int end = n-k;
        vector<int>v;

        copy(nums.begin()+end,nums.end(),back_inserter(v)); 
        copy(nums.begin(),nums.end()-k,back_inserter(v));

        nums = v;
    }
};