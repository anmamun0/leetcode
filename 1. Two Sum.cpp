class Solution {
    public:
        vector<int> twoSum(vector<int>& v, int target) {
    
            for(int i = 0; i< v.size()-1; i++)
            {
                int gap = target - v[i]; 
                auto it = find(v.begin()+i+1, v.end(), gap);
    
                if( it != v.end())
                { 
                    int j = distance(v.begin(),it);
                    return {i,j};
                }
            } 
            return {0,0}; 
        }
    };