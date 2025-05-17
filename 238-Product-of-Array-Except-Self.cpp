class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) 
        {
            vector<int>op ;
            long long n = nums.size(), product = 1,  zero = 0;
            for(auto c:nums) (c==0) ? zero++: product *= c; 
    
            for(auto c:nums)
            { 
                if (zero > 1)  op.push_back(0);
                else if (c == 0) op.push_back(product);
                else if (zero == 1)  op.push_back(0);
                else op.push_back(product / c); 
            } 
            return op;
        }
    };
    
    // pre =    1  2  6  24
    
    // nums =   1  2  3   4
    
    // suff =   24 24 12  4 
    
    
    
    
    
    
    
    //    for(auto c:nums)
    //         { 
    //             if(c==0)
    //             {
    //                 if(zero == 1) op.push_back(product); 
    //                 else op.push_back(0); 
    //             }
    //             else
    //             {
    //                 if(zero > 0) op.push_back(0);
    //                 else op.push_back(product/c);
    //             }  
    //         }
    // op.push_back(zero > 1 ? 0 : (c == 0 ? product : (zero ? 0 : product / c)));
    